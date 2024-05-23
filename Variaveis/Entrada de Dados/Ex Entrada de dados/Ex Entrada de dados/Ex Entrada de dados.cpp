
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << num1 << "\n";
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << num2 << std::endl;

    system("PAUSE");
    return 0;
}

