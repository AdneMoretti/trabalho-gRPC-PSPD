import grpc
import dictionary_pb2
import dictionary_pb2_grpc

def run():
    with grpc.insecure_channel('localhost:50051') as channel:
        stub = dictionary_pb2_grpc.DictionaryServiceStub(channel)

        # Modo Inclusão
        words_to_add = ["casa", "carro", "casa", "aviao"]
        for word in words_to_add:
            response = stub.ProcessWord(dictionary_pb2.WordRequest(word=word))
            print(f"Resposta do servidor: {response.message}")

        # Modo Consulta
        response = stub.ProcessWord(dictionary_pb2.WordRequest(word="IMPRIMIR"))
        print("Conteúdo do dicionário:")
        for entry in response.entries:
            print(f"{entry.word}: {entry.count}")

if __name__ == "__main__":
    run()
