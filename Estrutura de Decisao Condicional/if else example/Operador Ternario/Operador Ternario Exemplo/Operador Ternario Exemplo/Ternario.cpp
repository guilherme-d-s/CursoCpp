#include <iostream>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite o Primeiro N�mero: ";
	std::cin >> Numero01;
	std::cout << "Digite o Segundo N�mero: ";
	std::cin >> Numero02;
	/*O caractere ? representa if e : representa else
	logo o exemplo abaixo se l� "Se Numero01 for maior que Numero02 execute o comando a seguir, se n�o, execute a outra parte do comando ap�s : " 
	*/ 
	(Numero01 > Numero02) ? std::cout << "o primeiro n�mero � maior que o segundo n�mero" << "\n" : std::cout << "O segundo n�mero � maior que o primeiro." << "\n";

	system("PAUSE");
	return 0;
}