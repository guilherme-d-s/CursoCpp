#include <iostream>
#include <tchar.h>

int main() {

	_tsetlocale(LC_ALL, _T("Portuguese"));

	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };
	std::string Texto{ "Texto da String" };

	std::printf("Valor de N�mero Inteiro = %d, Valor de N�mero Real = %.2f o Valor de Caractere �: %c e o Valor de Text �: %s", NumeroInteiro, NumeroReal, Caractere, Texto);
	//%d indica que ser� colocado na string o valor da variavel de tipo int.
	//printf � uma fun��o que veio da linguagem C
	/* %f para n�meros flutuantes (double/float)
	%lf para long float
	%c para caractere (char)
	%s para string
	*/


	system("PAUSE");
	return 0;


}