#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	double Numero;
	bool Resultado, Resultado2;
	std::cout << "Digite um número: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	Resultado = (Numero > 100) && (Numero != 0);
	std::cout << "O resultado lógico que verifica se o número digitado é maior que 100 e diferente de 0 é: " << Resultado << std::endl;
	Resultado2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O resultado lógico que verifica se o número digitado é igual a 100 ou maior que 200, e menor que 1000  é: " << Resultado2 << std::endl;




	return 0;
	system("PAUSE");
}