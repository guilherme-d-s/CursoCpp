#include <iostream>
#include <locale.h>
#include "Matematica.h"

int main() {
	int num1, num2;
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite o primeiro n�mero: " << "\n";
	std::cin >> num1;
	std::cout << "\nDigite o segundo n�mero: " << "\n";
	std::cin >> num2;
	std::cout << "\nResultados das opera��es matematicas: " << std::endl;
	std::cout << "\nSoma: " << Soma(num1, num2);
	std::cout << "\nSubtra��o: " << Subtracao(num1, num2);
	std::cout << "\nMultiplica��o: " << Multplicacao(num1, num2);
	std::cout << "\nDivis�o: " << Divisao(num1, num2);
	std::cout << "\nPotencia��o: " << Potencia(num1, num2);
	std::cout << "\nRaiz Quadrada n�mero 1: " << RaizQuadrada(num1);
	std::cout << "\nRaiz Quadrada n�mero 2: " << RaizQuadrada(num2);

	system("PAUSE");
	return 0;
}