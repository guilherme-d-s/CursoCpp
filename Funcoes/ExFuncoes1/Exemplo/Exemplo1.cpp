#include <iostream>
#include <locale.h>

//Tipo de retorno da fun��o

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
	std::cout << "Digite um n�mero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o n�mero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma desse n�mero: " << Numero << " com o n�mero: " << NumeroASerSomado << " �: " << SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;


	system("PAUSE");
	return 0;
}