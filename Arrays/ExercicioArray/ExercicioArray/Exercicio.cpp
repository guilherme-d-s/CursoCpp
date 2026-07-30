#include <iostream>

int main() {

	float Velocidades[] = { 70.9f, 89.5f, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f };
	float SomaVelocidades = 0.0f;
	int TamanhoArray{ 0 };

	for (auto Vel : Velocidades) {
		SomaVelocidades += Vel;
		TamanhoArray++;
	}	

		std::cout << "Velocidade: " << SomaVelocidades / TamanhoArray << " km/h" << std::endl;



	system("pause");
	return 0;
}