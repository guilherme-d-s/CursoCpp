#include "Conta.h"
#include <iostream>
#include <string>

bool Conta::Sacar(double Valor) {
	if (Saldo < Valor) {
		std::cout << "Saldo insuficiente!\n";
		return false;
	}

	else {
		Saldo -= Valor;
		std::cout << "Saldo atual: R$" << ConsultarSaldo << "\n";
		return true;
	}

}

void Conta::Depositar(double Valor) {
	Saldo += Valor;
	std::cout << "\nDeposito de: R$" << Valor << "realizado com sucesso!\n";
}

void Conta::Transferir(Conta Destino, double Valor) {
	if (Saldo < Valor){
		std::cout << "\nSaldo insuficiente para transferencia!\n";
	}
	else {
		Destino.Depositar(Valor);
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumconta() << "\n";
		std::cout << "Transferencia realizada com sucesso!\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
	}
}

double Conta::ConsultarSaldo() {
	return Saldo;
}

std::string Conta::GetBanco() {
	return Banco;
}

int Conta::GetAgencia() {
	return Agencia;
}

std::string Conta::GetTitular() {
	return Titular;
}

void Conta::SetBanco(std::string Banco) {
	this->Banco = Banco;
}