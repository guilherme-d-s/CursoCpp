#include<iostream>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int* ptr;

	int Number = 101;

	std::cout << "\nEndere�o de N�mero: " << &Number;
	std::cout << "\nEndere�o de ptr: " << &ptr << " \n";
	system("PAUSE");
	return 0;




}