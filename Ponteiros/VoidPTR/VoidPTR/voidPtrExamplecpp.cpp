#include <iostream>
#include <locale.h>

int main() {

	int Numero{ 4890 };
	char Letra{ 'E'};
	void* ptrG;
	void* ptr2;
	ptrG = &Letra;


	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";

	ptrG = &Numero;

	std::cout << "Valor de Numero via ptrG = " << *(int*)ptrG << "\n";

	ptr2 = (int*)ptrG;
	std::cout << "Valor de ptr2: " << *((int*)ptr2) + 20 << std::endl;




	system("PAUSE");
	return 0;
}