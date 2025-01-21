#include <grpcpp/grpcpp.h>
#include "dictionary.grpc.pb.h"
#include <unordered_map>
#include <mutex>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

class DictionaryServiceImpl final : public DictionaryService::Service {
private:
    std::unordered_map<std::string, int> dictionary_;
    std::mutex mutex_;

public:
    Status ProcessWord(ServerContext* context, const WordRequest* request, WordResponse* response) override {
        std::lock_guard<std::mutex> lock(mutex_);
        const std::string& word = request->word();

        if (word == "IMPRIMIR") {
            for (const auto& entry : dictionary_) {
                WordEntry* wordEntry = response->add_entries();
                wordEntry->set_word(entry.first);
                wordEntry->set_count(entry.second);
            }
            response->set_message("Dicionário retornado com sucesso.");
        } else {
            dictionary_[word]++;
            response->set_message("Palavra adicionada ou atualizada com sucesso.");
        }

        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    DictionaryServiceImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Servidor gRPC em execução em " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}
