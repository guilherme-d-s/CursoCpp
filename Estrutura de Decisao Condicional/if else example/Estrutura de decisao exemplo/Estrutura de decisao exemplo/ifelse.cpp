#include <iostream>
#include <string>


int main() {

	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaDeAcesso) {
		std::cout << "\nAcesso Permitido!" << "\n";
	}
	else {
		std::cout << "\nAcesso negado!" << "\n";
	}




	system("PAUSE");
	return 0;
}