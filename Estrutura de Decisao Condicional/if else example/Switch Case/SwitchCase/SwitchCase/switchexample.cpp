#include <iostream>
#include <locale.h>


int main() {

	int Num1, Num2;
	setlocale(LC_ALL, "Portuguese");
	char Operacao;
	std::cout << "Digite um N�mero: ";
	std::cin >> Num1;
	std::cout << "\nDigite mais um n�mero: ";
	std::cin >> Num2;
	std::cout << "Qual opera��o deseja realizar? Adi��o (+), subtra��o (-), multiplica��o (*) ou divis�o (/) ? ";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+': 
		std::cout << "A soma dos n�meros �: " << Num1 + Num2 << "\n";
		break;
	case '-':
		std::cout << "A subtra��o dos n�meros �: " << Num1 - Num2 << "\n";
		break;
	case '*':
		std::cout << "A multiplica��o dos n�meros �: " << Num1 * Num2 << "\n";
		break;
	case '/':
		std::cout << "A divis�o dos n�meros �: " << Num1 / Num2 << "\n";
		break;
	default:
		std::cout << "\nA opera��o digitada � invalida." << "\n";
		break;
	}



	system("PAUSE");
	return 0;
}