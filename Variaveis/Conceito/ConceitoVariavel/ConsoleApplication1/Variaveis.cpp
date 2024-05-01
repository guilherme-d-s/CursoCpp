#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declara��o de Vari�veis
	/* Primeiro colocamos qual tipo de vari�vel que desejamos que 
	   o computador crie ao executar nosso programa
	   nesse caso escolhemos ambas como int (integer)
	   ou seja, o local da mem�ria que estamos solicitando ao computador
	   deve ser capaz de armazenar n�meros inteiros (-3, -2, -1, 0, 1, 2);
	   Ent�o int NumVidas poder ser lido da seguinte forma:
	   "Computador por favor me forne�a um local na mem�ria RAM com tamanho suficiente para armazenar um n�mero inteiro
	   e coloque o nome deste local como sendo NumVidas"
	*/
	int NumVidas = 5;
	/* Acima o computador ir� alocar um espa�o de mem�ria do tipo inteiro e depois vai at� este local
	na mem�ria RAM e vai colocar o valor 5 
	*/

	int Score = 1350;
	/* Acima o computador ir� alocar um espa�o de mem�ria do tipo inteiro e depois vai at� este local
	na mem�ria RAM e vai colocar o valor 1350 
	*/

	std::cout << "***Inicio do Jogo***" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "Tamanho da Vari�vel NumVidas: " << sizeof(NumVidas) << " Bytes" << "\n";
	std::cout << "Tamanho da Vari�vel Score: " << sizeof(Score) << " Bytes << " "\n";
	std::cout << "Endere�� que NumVidas ocupa na mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Score ocupa na mem�ria RAM: " << &Score << std::endl;
	std::cout << "***************" << std::endl;

	std::cout << "***Durante o Jogo***" << std::endl;

	/*V� at� a regi�o de mem�ria Rotulada com o nome "Score" e coloque agora em soma o valor que 
	est� contido nela mais 150
	Score = 1350 + 150;
	Score = 1500;
	*/
	Score = Score + 150;

	/*V� at� a regi�o de mem�ria Rotulada com o nome "NumVidas" e coloque agora em subtra��o o valor que
	est� contido nela -1
	NumVidas = 5 -1;
	NumVidas = 4;
	*/
	NumVidas = NumVidas - 1;


	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	system("PAUSE");
}