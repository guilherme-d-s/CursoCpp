#include <iostream>
#include <locale.h>
struct Ponto3D {
	float x{ 0.0f };
	float y{ 0.0f };
	float z{ 0.0f };
};
void point3D(Ponto3D Pontos);


int main() {
	setlocale(LC_ALL, "Portuguese");
	Ponto3D Ponto3D;

	std::cout << "Digite as coordenadas do ponto 3D (x, y, z): ";
	std::cin >> Ponto3D.x >> Ponto3D.y >> Ponto3D.z;
	std::cout << "As coordenadas do ponto 3D são: \n"; 
	point3D(Ponto3D);




	system("pause");
	return 0;
}

void point3D(Ponto3D Pontos)
{
	std::cout << "X: " << Pontos.x << "\n";
	std::cout << "Y: " << Pontos.y << "\n";
	std::cout << "Z: " << Pontos.z << std::endl;
}
