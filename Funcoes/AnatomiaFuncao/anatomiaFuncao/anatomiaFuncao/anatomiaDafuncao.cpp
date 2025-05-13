#include <iostream>
#include <locale.h>
/*Crie uma função que indique se um número é par ou impar. Receba número do usuário e exiba na tela o número recebido e se ele é par ou impar.
*/

bool isPar(int num);

int main() {
	setlocale(LC_ALL, "PORTUGUESE");
	int Numero;
	std::cout << "\nDigite um número inteiro: \n";
	std::cin >> Numero;

	if (isPar(Numero)) {
		std::cout << "\nNúmero: " << Numero << " é par!\n";
	}
	else {
		std::cout << "\nNúmero: " << Numero << " é impar!" << std::endl;
	}

	system ("PAUSE");
	return 0;

}
bool isPar(int num) {
	if (num % 2 == 0)
		return true;
	else 
		return false;
	}