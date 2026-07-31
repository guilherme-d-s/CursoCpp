#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int Array[] = { 1, 23, -78, 900, 234 };
	int* ptr;

	ptr = &Array[0];

	for (int i = 0; i < 5; i++) {
		std::cout << "Array [" << i << "] = " << Array[i] << " Endereço: " << &Array[i] << std::endl;
	}

	system("pause");
	return 0;
}