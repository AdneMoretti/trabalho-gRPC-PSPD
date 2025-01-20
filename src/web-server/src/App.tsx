import { ChangeEvent, useState } from "react";
import grpcLogo from "./assets/grpcLogo.svg";
import "./App.css";

type Word = {
  word: string;
  count: number;
};
function App() {
  const [newWord, setNewWord] = useState("");
  const [dictionary, setDictionary] = useState<Word[]>([]);

  function handleChangeTask(event: ChangeEvent<HTMLInputElement>) {
    setNewWord(event.target.value);
  }

  async function handleSubmit() {
    if (!newWord) {
      alert("Por favor, insira uma palavra antes de adicionar.");
      return;
    }

    try {
      const response = await fetch("http://localhost:3000/add-word", {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
        },
        body: JSON.stringify({ word: newWord }),
      });

      if (response.ok) {
        const data = await response.json();
        alert(data.message || "Palavra adicionada com sucesso!");
        setNewWord("");
      } else {
        const errorData = await response.json();
        alert(errorData.error || "Erro ao adicionar a palavra.");
      }
    } catch (error) {
      console.error("Erro ao adicionar a palavra:", error);
      alert("Erro de conexão com o servidor.");
    }
  }

  async function handleListWords() {
    try {
      const response = await fetch("http://localhost:3000/dict");

      if (response.ok) {
        const data = await response.json();
        setDictionary(data);
      } else {
        const errorData = await response.json();
        alert(errorData.error || "Erro ao obter o dicionário.");
      }
    } catch (error) {
      console.error("Erro ao obter o dicionário:", error);
      alert("Erro de conexão com o servidor.");
    }
  }

  return (
    <>
      <div>
        <h1>Laboratório Virtualização</h1>
        <a href="https://grpc.io" target="_blank" rel="noopener noreferrer">
          <img src={grpcLogo} className="logo react" alt="React logo" />
        </a>
      </div>
      <div className="card">
        <div>
          <input
            onChange={handleChangeTask}
            type="text"
            id="chk1"
            className="input"
            value={newWord}
            placeholder="Entre com uma palavra"
          />
        </div>

        <button className="button" onClick={handleSubmit}>
          Adicionar palavra
        </button>
      </div>
      <button className="button" onClick={handleListWords}>
        Listar Palavras
      </button>
      <div className="dictionary">
        <h2>Dicionário</h2>
        <table className="info-table">
          <thead>
            <tr>
              <th>Palavra</th>
              <th>Ocorrências</th>
            </tr>
          </thead>
          <tbody>
            {dictionary.map((entry) => (
              <tr>
                <td>{entry.word}</td>
                <td>{entry.count}</td>
              </tr>
              )
            )}
          </tbody>
        </table>
      </div>
    </>
  );
}

export default App;
