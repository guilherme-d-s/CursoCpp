#include <locale.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3;

    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro n�mero: ";
    std::cin >> num3;
    float media = (num1 + num2 + num3) / 3;

    std::cout << "Os n�meros digitados foram: " << num1 << ", " << num2 << " e " << num3 << "\n";
    std::cout << "e a m�dia desses n�meros �: " << media;

    system("PAUSE");
    return 0;
}
