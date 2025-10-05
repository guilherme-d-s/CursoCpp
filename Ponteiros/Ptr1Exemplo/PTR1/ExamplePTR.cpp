#include<iostream>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int* ptr;

	int Number = 101;

	std::cout << "\nEndereço de Número: " << &Number;
	std::cout << "\nEndereço de ptr: " << &ptr << " \n";
	system("PAUSE");
	return 0;




}