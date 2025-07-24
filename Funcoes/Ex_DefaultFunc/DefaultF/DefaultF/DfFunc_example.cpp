#include <iostream>
#include <locale.h>

void Coordenadas(int x, int y, int z = 1);

int main() {
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite três números para coordenada:" << std::endl;
	int x,y,z;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;
	Coordenadas(x, y, z);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z) {
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << "-" << y << "-" << z << ")" << std::endl;
}