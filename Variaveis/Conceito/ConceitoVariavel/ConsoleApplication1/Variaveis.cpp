#include <iostream>
#include <tchar.h>

int main()
{
	//Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declaração de Variáveis
	/* Primeiro colocamos qual tipo de variável que desejamos que 
	   o computador crie ao executar nosso programa
	   nesse caso escolhemos ambas como int (integer)
	   ou seja, o local da memória que estamos solicitando ao computador
	   deve ser capaz de armazenar números inteiros (-3, -2, -1, 0, 1, 2);
	   Então int NumVidas poder ser lido da seguinte forma:
	   "Computador por favor me forneça um local na memória RAM com tamanho suficiente para armazenar um número inteiro
	   e coloque o nome deste local como sendo NumVidas"
	*/
	int NumVidas = 5;
	/* Acima o computador irá alocar um espaço de memória do tipo inteiro e depois vai até este local
	na memória RAM e vai colocar o valor 5 
	*/

	int Score = 1350;
	/* Acima o computador irá alocar um espaço de memória do tipo inteiro e depois vai até este local
	na memória RAM e vai colocar o valor 1350 
	*/

	std::cout << "***Inicio do Jogo***" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas) << " Bytes" << "\n";
	std::cout << "Tamanho da Variável Score: " << sizeof(Score) << " Bytes << " "\n";
	std::cout << "Endereçõ que NumVidas ocupa na memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Score ocupa na memória RAM: " << &Score << std::endl;
	std::cout << "***************" << std::endl;

	std::cout << "***Durante o Jogo***" << std::endl;

	/*Vá até a região de memória Rotulada com o nome "Score" e coloque agora em soma o valor que 
	está contido nela mais 150
	Score = 1350 + 150;
	Score = 1500;
	*/
	Score = Score + 150;

	/*Vá até a região de memória Rotulada com o nome "NumVidas" e coloque agora em subtração o valor que
	está contido nela -1
	NumVidas = 5 -1;
	NumVidas = 4;
	*/
	NumVidas = NumVidas - 1;


	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	system("PAUSE");
}