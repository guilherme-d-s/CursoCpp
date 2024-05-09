/* Desenvolva um programa em C++ que:
-Declare uma vari�vel do tipo inteiro e inicialize ela com algum valor do tipo inteiro
- Declare uma vari�vel do tipo float e inicialize ela com algum valor do tipo ponto flutuante(real)
- Declare uma vari�vel do tipo double e inicialize ela com algum valor do tipo ponto flutuante(real) de dupla precis�o(double)
- Declare uma vari�vel do tipo char e inicialize ela com algum valor do tipo caractere

Depois coloque na tela para cada vari�vel :
O Valor da vari�vel
Tamanho da Vari�vel
O Endere�o de mem�ria da Vari�vel */

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


    std::cout << "Valor da vari�vel numint: " << numint << "\n";
    std::cout << "Tamanho da vari�vel numint: " << sizeof(numint) << "Bytes" "\n";
    std::cout << "Endere�o da vari�vel numint: " << &numint << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Valor da vari�vel numflo: " << numflo << "\n";
    std::cout << "Tamanho da vari�vel numflo: " << sizeof(numflo) << "Bytes" "\n";
    std::cout << "Endere�o da vari�vel numflo: " << &numflo << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Valor da vari�vel numdoubl: " << numdoubl << std::endl;
    std::cout << "Tamanho da vari�vel numdoubl: " << sizeof(numdoubl) << "Bytes" "\n";
    std::cout << "Endere�o da vari�vel numdoubl: " << &numdoubl << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Valor da vari�vel numcha: " << numcha << "\n";
    std::cout << "Tamanho da vari�vel numcha: " << sizeof(numcha) << "Bytes" "\n";
    std::cout << "Endere�o da vari�vel numcha: " << (void *) & numcha << std::endl;
    std::cout << "------------------------------------------------" << std::endl;



    system("PAUSE");
    return 0;
}

