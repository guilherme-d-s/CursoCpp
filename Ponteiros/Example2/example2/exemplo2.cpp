#include<iostream>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "portuguese");

	int Numero{ 102 };
	int* ptr = &Numero;
	std::cout << "\nValor da Variavel Numero: " << Numero << "\n";
	std::cout << "\nValor da Variavel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endereço de Numero: " << &Numero << "\n";
	std::cout << "\nValor do que ptr esta carregado na RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variavel apondata por ptr: " << *ptr << "\n";

	*ptr = 20963;
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";

	system("PAUSE");
	return 0;
}