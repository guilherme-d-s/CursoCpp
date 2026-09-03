#include <iostream>
#include <string>
#include <locale.h>

struct Livro {
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    std::string editora;
    int numeroPaginas;
};

int main() {
    system("chcp 1252 > nul");
    setlocale(LC_ALL, "Portuguese_Brazil");

    Livro livro;

    std::cout << "*** Cadastro de Livros ***" << std::endl;

    std::cout << "Digite o título do livro: " << "\n";
    std::getline(std::cin, livro.titulo);

    std::cout << "Digite o autor do livro: " << "\n";
    std::getline(std::cin, livro.autor);

    std::cout << "Digite o ano de publicação: " << "\n";
    std::cin >> livro.anoPublicacao;
    std::cin.ignore();

    std::cout << "Digite a editora do livro: " << "\n";
    std::getline(std::cin, livro.editora);

    std::cout << "Digite o número de páginas: " << "\n";
    std::cin >> livro.numeroPaginas;

    std::cout << "\n*** Dados do Livro Cadastrado ***" << std::endl;
    std::cout << "Título: " << livro.titulo << "\n";
    std::cout << "Autor: " << livro.autor << "\n";
    std::cout << "Ano de Publicação: " << livro.anoPublicacao << "\n";
    std::cout << "Editora: " << livro.editora << "\n";
    std::cout << "Número de Páginas: " << livro.numeroPaginas << std::endl;

    system("pause");
    return 0;
}
