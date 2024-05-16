#include <iostream>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "Portuguese");
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << std::endl;
	std::cout << "Endereço de Memória de NUM_VIDAS: " << &NUM_VIDAS << std::endl;
	std::cout << "Tamanho de NUM_VIDAS: " << sizeof(NUM_VIDAS) << " Bytes" << std::endl;

	system("PAUSE");
	return 0;

}