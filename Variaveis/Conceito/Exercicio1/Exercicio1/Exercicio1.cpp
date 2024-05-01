#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int NumComputadores;
	NumComputadores = 100;

	int SerialComputadores;
	SerialComputadores = 11111;

	std::cout << "$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "Número de Computadores: " << NumComputadores << "\n" << "Serial dos Computadores: " << SerialComputadores << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$" << std::endl;


	system("PAUSE");
	return 0;
}