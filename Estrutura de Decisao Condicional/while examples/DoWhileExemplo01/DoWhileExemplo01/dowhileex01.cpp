#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int escolha = 0;
	do {
		std::cout << "\n--Tickets Cinema--" << std::endl;
		std::cout << "\n1 Para Meia Entrada \n";
		std::cout << "\n2 Para Inteira \n";
		std::cout << "\n3 Sair." << std::endl;
		std::cout << "\nEscolha sua opção: " << std::endl;
		std::cin >> escolha;

		switch (escolha) {
			case 1: std::cout << "\nTicket Meia Entrada Comprada com sucesso\n";
				break;
			case 2: std::cout << "\n Ticket Inteira Comprada com sucesso.\n";
				break;
			case 3: std::cout << "\n Saindo Menu Tickets...\n";
				break;
			default: std::cout << "\nOpção Invalida.\n";
		}



	} while (escolha != 3);




	return 0;
	system("PAUSE");

	}