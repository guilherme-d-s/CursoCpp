#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4, num5, num6, num9, num10;
    float num7, num8;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;
    int resto;

    std::cout << "Digite um número para somar: ";
    std::cin >> num1;
    std::cout << "Digite mais um número: ";
    std::cin >> num2;
    soma = num1 + num2;
    std::cout << "A soma dos dois números é: " << soma << std::endl;

    std::cout << "Agora digite um número para fazer subtração: ";
    std::cin >> num3;
    std::cout << "Digite mais um numero para subtração: ";
    std::cin >> num4;
    subtracao = num3 - num4;
    std::cout << "O resultado é: " << subtracao << std::endl;

    std::cout << "Digite um número para multiplicar: ";
    std::cin >> num5;
    std::cout << "Por quanto você quer multiplicar? ";
    std::cin >> num6;
    multiplicacao = num5 * num6;
    std::cout << num5 << " x " << num6 << " é: " << multiplicacao << std::endl;

    std::cout << "Agora vamos dividir, digite um número: ";
    std::cin >> num7;
    std::cout << "Por quanto você gostaria de dividir? ";
    std::cin >> num8;
    divisao = num7 / num8;
    std::cout << "a divisão entre " << num7 << " e " << num8 << " é: " << divisao << std::endl;

    std::cout << "Por ultimo vamos ao resto da divisão, digite um número: ";
    std::cin >> num9;
    std::cout << "Digite mais um número: ";
    std::cin >> num10;
    resto = num9 % num10;
    std::cout << "O resto da divisão entre " << num9 << " e " << num10 << " é: " << resto << std::endl;
 

    system("PAUSE");
    return 0;
}

