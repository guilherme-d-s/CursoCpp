#include <iostream>
#include <locale.h>

//Tipo de retorno da função

int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	int SomaDosNumeros;
	SomaDosNumeros = Numero + NumeroASerSomado;

	return SomaDosNumeros;
	}

int main()

{
	setlocale(LC_ALL, "portuguese");
	int Numero, NumeroASerSomado;
	std::cout << "Digite um número: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o número a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma desse número: " << Numero << " com o número: " << NumeroASerSomado << " é: " << SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;


	system("PAUSE");
	return 0;
}