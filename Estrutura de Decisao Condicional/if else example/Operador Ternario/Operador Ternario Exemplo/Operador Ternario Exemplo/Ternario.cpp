#include <iostream>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite o Primeiro Número: ";
	std::cin >> Numero01;
	std::cout << "Digite o Segundo Número: ";
	std::cin >> Numero02;
	/*O caractere ? representa if e : representa else
	logo o exemplo abaixo se lê "Se Numero01 for maior que Numero02 execute o comando a seguir, se não, execute a outra parte do comando após : " 
	*/ 
	(Numero01 > Numero02) ? std::cout << "o primeiro número é maior que o segundo número" << "\n" : std::cout << "O segundo número é maior que o primeiro." << "\n";

	system("PAUSE");
	return 0;
}