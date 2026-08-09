#include<iostream>
#include<string>
#include<locale.h>

class Casa {
public:
	int NumQuartos{ 4 };
	float Tamanho{ 170.7f };
	bool bPiscina{ true };
	void MostrarTamanho();
	int ObtenhaNumQuartos();
	bool Psicina();

};

int main() {
	setlocale(LC_ALL, "Portuguese");
	Casa CasadePraia;
	CasadePraia.MostrarTamanho();
	CasadePraia.ObtenhaNumQuartos();
	std::cout << "\nO número de quartos da casa é: " << CasadePraia.ObtenhaNumQuartos() << std::endl;
	CasadePraia.bPiscina;
	std::cout << "\nA casa tem piscina? " << (CasadePraia.Psicina() ? "Sim" : "Não") << std::endl;


	return 0;
}
void Casa::MostrarTamanho() {
	std::cout << "\nO tamanho da casa é: " << Tamanho << std::endl;
	//return Tamanho; <isso da erro pois o tipo de retorno da função é void, ou seja, não retorna nada, porem se fossem ambos float daria para usar essa chamada.>
}
int Casa::ObtenhaNumQuartos() {
	return NumQuartos;
}
bool Casa::Psicina() {
	return bPiscina;
}