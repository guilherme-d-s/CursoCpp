#include<iostream>
#include<string>
#include "Conta.h"
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	Conta ContaCliente1;
	Conta ContaCliente2;

	ContaCliente1.SetBanco("Banco do Brasil");
	ContaCliente1.SetAgencia(1234);
	ContaCliente1.SetNumconta(56789);
	ContaCliente1.SetTitular("Guanabara");
	ContaCliente1.Depositar(1000.00);
	ContaCliente1.Sacar(200.00);


	ContaCliente2.SetBanco("Caixa Econômica Federal");
	ContaCliente2.SetAgencia(4321);
	ContaCliente2.SetNumconta(98765);
	ContaCliente2.SetTitular("Gustavo");
	ContaCliente2.Depositar(500.00);


	ContaCliente1.Transferir(ContaCliente2, 200);
	ContaCliente2.Sacar(100.00);
	system("pause");
	return 0;
}