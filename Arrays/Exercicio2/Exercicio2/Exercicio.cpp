#include <iostream>

int main() {

	float NotasAluno[]{ 4.9f, 9.5f, 5.6f,2.5f, 9.6f, 6.4f, 7.5f, 9.8f, 8.7f, 10.0f };
	float somaNotas = 0.0f;
	int TamArray = 0;

	for (auto nota : NotasAluno) {
		somaNotas += nota;
		TamArray++;
	}



	std::cout << "Media de notas: " << somaNotas / TamArray << std::endl;

	system("pause");
	return 0;
}