
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << num1 << "\n";
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    std::cout << num2 << std::endl;

    system("PAUSE");
    return 0;
}

