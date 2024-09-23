#include <iostream>
#include <string>

class Pessoa {
private:      
    std::string nome;   // Nome da pessoa
    int idade;         // Idade da pessoa
    float altura;      // Altura da pessoa

public:
    // Construtor para inicializar os atributos
    Pessoa(std::string n, int i, float a) : nome(n), idade(i), altura(a) {}

    // Método para exibir os dados da pessoa
    void exibirDados() const {
        std::cout << "Nome: " << nome << ", Idade: " << idade << ", Altura: " << altura << "m" << std::endl;
    }

    // Métodos para acessar os atributos (getters)
    std::string getNome() const { return nome; }
    int getIdade() const { return idade; }
    float getAltura() const { return altura; }

    void setNome(const std::string& n) { nome = n; }
    void setIdade(int i) { idade = i; }
    void setAltura(float a) { altura = a; }
};

int main() {
    // Criando um objeto da classe Pessoa
    Pessoa pessoa1("João", 30, 1.75);
    
    // Exibindo os dados da pessoa
    pessoa1.exibirDados();

    return 0;
}
