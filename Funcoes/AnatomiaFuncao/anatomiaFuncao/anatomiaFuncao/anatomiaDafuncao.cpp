#include <iostream>
#include <locale.h>
/*Crie uma fun��o que indique se um n�mero � par ou impar. Receba n�mero do usu�rio e exiba na tela o n�mero recebido e se ele � par ou impar.
*/

bool isPar(int num);

int main() {
	setlocale(LC_ALL, "PORTUGUESE");
	int Numero;
	std::cout << "\nDigite um n�mero inteiro: \n";
	std::cin >> Numero;

	if (isPar(Numero)) {
		std::cout << "\nN�mero: " << Numero << " � par!\n";
	}
	else {
		std::cout << "\nN�mero: " << Numero << " � impar!" << std::endl;
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