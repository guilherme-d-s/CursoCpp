#include <iostream>
#include <locale.h>

float Soma (float Num1, float Num2);
float Subtracao (float Num1, float Num2);
float Multiplicacao (float Num1, float Num2);
float Divisao (float Num1, float Num2);


int main() {
	setlocale(LC_ALL, "portuguese");

	int Num1, Num2;

	std::cout << "Digite um n�mero: " << "\n";
	std::cin >> Num1;
	std::cout << "\nDigite o segundo n�mero: " << "\n";
	std::cin >> Num2;
	std::cout << "\nO resultados das seguintes opera��es com os n�meros fornecidos s�o: " << std::endl;
	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
	std::cout << "Subtra��o: " << Subtracao(Num1, Num2) << "\n";
	std::cout << "Multiplica��o: " << Multiplicacao(Num1, Num2) << "\n";
	std::cout << "Divis�o: " << Divisao(Num1, Num2) << "\n";




	system("PAUSE");
	return 0;
}

float Soma(float Num1, float Num2) {
	return Num1 + Num2;
}

float Subtracao(float Num1, float Num2) {
	return Num1 - Num2;
}

float Multiplicacao(float Num1, float Num2) {
	return Num1 * Num2;
}

float Divisao(float Num1, float Num2) {
	return Num1 / Num2;
}
