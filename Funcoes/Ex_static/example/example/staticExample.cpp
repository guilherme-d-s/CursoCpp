#include <iostream>

int ContadorChamadas() {

	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;

}

int main() {

	for (int i = 0; i < 5; i++) {
		std::cout << ContadorChamadas() << std::endl;
	}


	system("PAUSE");
	return 0;
}