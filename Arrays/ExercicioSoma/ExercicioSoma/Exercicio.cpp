#include <iostream>
#include <string>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	std::string NomeAluno;
	float Notas[10]{ 0.0f };
	float Media, Soma{ 0.0 };

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 9; i++) {
		std::cout << "\nDigite a " << (i + 1) << "º Nota: ";
		std::cin >> Notas[i];
		Soma = Soma + Notas[i];
		system("CLS");
	}

	Media = Soma / 10;

	std::cout << "\nA média das notas do aluno " << NomeAluno << " foram: " << Media << "\n";

	system("PAUSE");
	return 0;
}