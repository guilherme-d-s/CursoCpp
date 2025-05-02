#include <iostream>
#include <locale.h>
//O codigo deve fazer a soma do número 1 até o 100 usando a estrutura for
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int soma = 0;
	for (int num = 1; num <= 100; num++)
	{
		soma = soma + num;
	}

	std::cout << "\nA soma dos números de 1 a 100 é: " << soma << "\n";

	system("PAUSE");
	return 0;




}