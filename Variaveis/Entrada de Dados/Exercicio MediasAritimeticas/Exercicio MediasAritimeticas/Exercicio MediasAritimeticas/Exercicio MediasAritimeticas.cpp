#include <locale.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;
    float media = (num1 + num2 + num3) / 3;

    std::cout << "Os números digitados foram: " << num1 << ", " << num2 << " e " << num3 << "\n";
    std::cout << "e a média desses números é: " << media;

    system("PAUSE");
    return 0;
}
