#include <iostream>
#include <locale.h>


int main() {

	int Num1, Num2;
	setlocale(LC_ALL, "Portuguese");
	char Operacao;
	std::cout << "Digite um Número: ";
	std::cin >> Num1;
	std::cout << "\nDigite mais um número: ";
	std::cin >> Num2;
	std::cout << "Qual operação deseja realizar? Adição (+), subtração (-), multiplicação (*) ou divisão (/) ? ";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+': 
		std::cout << "A soma dos números é: " << Num1 + Num2 << "\n";
		break;
	case '-':
		std::cout << "A subtração dos números é: " << Num1 - Num2 << "\n";
		break;
	case '*':
		std::cout << "A multiplicação dos números é: " << Num1 * Num2 << "\n";
		break;
	case '/':
		std::cout << "A divisão dos números é: " << Num1 / Num2 << "\n";
		break;
	default:
		std::cout << "\nA operação digitada é invalida." << "\n";
		break;
	}



	system("PAUSE");
	return 0;
}