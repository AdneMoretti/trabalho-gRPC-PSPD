from flask import Flask, request, jsonify
import grpc
import dictionary_pb2
import dictionary_pb2_grpc

app = Flask(__name__)

GRPC_SERVER_ADDRESS = 'localhost:50051'

def grpc_client_process_word(word):
    """Função auxiliar para se comunicar com o servidor gRPC."""
    with grpc.insecure_channel(GRPC_SERVER_ADDRESS) as channel:
        stub = dictionary_pb2_grpc.DictionaryServiceStub(channel)
        response = stub.ProcessWord(dictionary_pb2.WordRequest(word=word))
        return response

@app.route('/add-word', methods=['POST'])
def add_word():
    """Endpoint para adicionar ou atualizar uma palavra no dicionário."""
    data = request.get_json()
    word = data.get('word', '')
    if not word:
        return jsonify({'error': 'A palavra é obrigatória'}), 400

    try:
        response = grpc_client_process_word(word)
        return jsonify({'message': response.message}), 200
    except grpc.RpcError as e:
        return jsonify({'error': str(e)}), 500

@app.route('/dict', methods=['GET'])
def get_dictionary():
    """Endpoint para recuperar o conteúdo do dicionário."""
    try:
        response = grpc_client_process_word('IMPRIMIR')
        dictionary = [{'word': entry.word, 'count': entry.count} for entry in response.entries]
        return jsonify(dictionary), 200
    except grpc.RpcError as e:
        return jsonify({'error': str(e)}), 500

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=3000)
