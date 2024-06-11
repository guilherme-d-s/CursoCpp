#include <iostream>
#include <tchar.h>

int main() {

	_tsetlocale(LC_ALL, _T("Portuguese"));

	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };
	std::string Texto{ "Texto da String" };

	std::printf("Valor de Número Inteiro = %d, Valor de Número Real = %.2f o Valor de Caractere é: %c e o Valor de Text é: %s", NumeroInteiro, NumeroReal, Caractere, Texto);
	//%d indica que será colocado na string o valor da variavel de tipo int.
	//printf é uma função que veio da linguagem C
	/* %f para números flutuantes (double/float)
	%lf para long float
	%c para caractere (char)
	%s para string
	*/


	system("PAUSE");
	return 0;


}