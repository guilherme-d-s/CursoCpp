#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	float numero2;
	double numero3;

	numero = 45;
	numero2 = 55.56f;
	numero3 = 45345.904555;

	std::cout << "Valor N�mero: " << numero << std::endl;
	std::cout << "Tamanho da Variavel numero: " << sizeof(numero) << "Bytes" << "\n";
	std::cout << "Endere�o Carregado na mem�ria: " << &numero << "\n";
	std::cout << "Valor N�mero: " << numero2 << std::endl;
	std::cout << "Tamanho da Variavel numero2: " << sizeof(numero2) << "Bytes" << "\n";
	std::cout << "Endere�o Carregado na mem�ria: " << &numero2 << "\n";
	std::cout << "Valor N�mero: " << numero3 << std::endl;
	std::cout << "Tamanho da Variavel numero3: " << sizeof(numero3) << "Bytes" << "\n";
	std::cout << "Endere�o Carregado na mem�ria: " << &numero3 << "\n";

	system("PAUSE");
	return 0;
	}