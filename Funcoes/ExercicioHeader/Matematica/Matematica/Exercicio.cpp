#include <iostream>
#include <locale.h>
#include "Matematica.h"

int main() {
	int num1, num2;
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite o primeiro número: " << "\n";
	std::cin >> num1;
	std::cout << "\nDigite o segundo número: " << "\n";
	std::cin >> num2;
	std::cout << "\nResultados das operações matematicas: " << std::endl;
	std::cout << "\nSoma: " << Soma(num1, num2);
	std::cout << "\nSubtração: " << Subtracao(num1, num2);
	std::cout << "\nMultiplicação: " << Multplicacao(num1, num2);
	std::cout << "\nDivisão: " << Divisao(num1, num2);
	std::cout << "\nPotenciação: " << Potencia(num1, num2);
	std::cout << "\nRaiz Quadrada número 1: " << RaizQuadrada(num1);
	std::cout << "\nRaiz Quadrada número 2: " << RaizQuadrada(num2);

	system("PAUSE");
	return 0;
}