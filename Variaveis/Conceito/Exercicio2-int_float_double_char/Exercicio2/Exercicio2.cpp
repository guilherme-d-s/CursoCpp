/* Desenvolva um programa em C++ que:
-Declare uma variável do tipo inteiro e inicialize ela com algum valor do tipo inteiro
- Declare uma variável do tipo float e inicialize ela com algum valor do tipo ponto flutuante(real)
- Declare uma variável do tipo double e inicialize ela com algum valor do tipo ponto flutuante(real) de dupla precisão(double)
- Declare uma variável do tipo char e inicialize ela com algum valor do tipo caractere

Depois coloque na tela para cada variável :
O Valor da variável
Tamanho da Variável
O Endereço de memória da Variável */

#include <iostream>
#include <iomanip>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numint;
    numint = 5;
    float numflo;
    numflo = 5.5;
    double numdoubl;
    numdoubl = 5.105061;
    char numcha;
    numcha = 'A';


    std::cout << "Valor da variável numint: " << numint << "\n";
    std::cout << "Tamanho da variável numint: " << sizeof(numint) << "Bytes" "\n";
    std::cout << "Endereço da variável numint: " << &numint << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Valor da variável numflo: " << numflo << "\n";
    std::cout << "Tamanho da variável numflo: " << sizeof(numflo) << "Bytes" "\n";
    std::cout << "Endereço da variável numflo: " << &numflo << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Valor da variável numdoubl: " << numdoubl << std::endl;
    std::cout << "Tamanho da variável numdoubl: " << sizeof(numdoubl) << "Bytes" "\n";
    std::cout << "Endereço da variável numdoubl: " << &numdoubl << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Valor da variável numcha: " << numcha << "\n";
    std::cout << "Tamanho da variável numcha: " << sizeof(numcha) << "Bytes" "\n";
    std::cout << "Endereço da variável numcha: " << (void *) & numcha << std::endl;
    std::cout << "------------------------------------------------" << std::endl;



    system("PAUSE");
    return 0;
}

