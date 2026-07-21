#include <iostream>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "portuguese");

	int NumElementos;
	int Min{ 0 }, Max{ 0 };

	int Array[20];

	std::cout << "Digite o número de elementos: ";
	std::cin >> NumElementos;

	for (int i = 0; i < NumElementos; i++) {

		std::cout << "\nDigite o " << (i + 1) << "º" << " elemento: ";
		std::cin >> Array[i];
		system("CLS");
	}

	for (int i = 0; i < NumElementos; i++) {
		if (Array[i] > Max)
			Max = Array[i];
		else if (Array[i] < Min)
			Min = Array[i];
	}

	std::cout << "\n O Maior número digitado foi: " << Max << "\n e o menor foi: " << Min << "\n";

	system("PAUSE");
	return 0;
	}