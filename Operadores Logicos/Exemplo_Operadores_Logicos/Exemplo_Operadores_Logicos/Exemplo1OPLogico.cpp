#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	double Numero;
	bool Resultado, Resultado2;
	std::cout << "Digite um n�mero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	Resultado = (Numero > 100) && (Numero != 0);
	std::cout << "O resultado l�gico que verifica se o n�mero digitado � maior que 100 e diferente de 0 �: " << Resultado << std::endl;
	Resultado2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O resultado l�gico que verifica se o n�mero digitado � igual a 100 ou maior que 200, e menor que 1000  �: " << Resultado2 << std::endl;




	return 0;
	system("PAUSE");
}