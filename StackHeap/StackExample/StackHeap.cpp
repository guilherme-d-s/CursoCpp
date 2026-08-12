#include <iostream>

void funcao01();
void funcao02();
void funcao03();
void funcao04();
int VarGlobal{ 10 };

int main() {

	int VarMain{ 00 };
	funcao01();


	system("pause");
	return 0;
}

void funcao01()
{
	int Var01{ 01 };
	static int VarStatic{ 20 };
	std::cout << "\nChamando funcao01\n";
	std::cout << "\nEndereco de Var01: " << &Var01 << std::endl;
	VarStatic++;
	std::cout << "\nValor VarStatic: " << VarStatic << std::endl;
	funcao02();

}

void funcao02()
{
	int Var02{ 02 };
	std::cout << "\nChamando funcao02\n";
	std::cout << "\nEndereco de Var02: " << &Var02 << std::endl;
	funcao03();

}

void funcao03()
{
	int Var03{ 03 };
	std::cout << "\nChamando funcao03\n";
	std::cout << "\nEndereco de Var03: " << &Var03 << std::endl;
	funcao04();
}

void funcao04()
{
	int Var04{ 04 };
	std::cout << "\nChamando funcao04\n";
	std::cout << "\nEndereco de Var04: " << &Var04 << std::endl;
}
