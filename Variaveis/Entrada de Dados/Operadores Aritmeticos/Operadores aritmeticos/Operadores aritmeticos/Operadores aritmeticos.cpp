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

    std::cout << "Digite um n�mero para somar: ";
    std::cin >> num1;
    std::cout << "Digite mais um n�mero: ";
    std::cin >> num2;
    soma = num1 + num2;
    std::cout << "A soma dos dois n�meros �: " << soma << std::endl;

    std::cout << "Agora digite um n�mero para fazer subtra��o: ";
    std::cin >> num3;
    std::cout << "Digite mais um numero para subtra��o: ";
    std::cin >> num4;
    subtracao = num3 - num4;
    std::cout << "O resultado �: " << subtracao << std::endl;

    std::cout << "Digite um n�mero para multiplicar: ";
    std::cin >> num5;
    std::cout << "Por quanto voc� quer multiplicar? ";
    std::cin >> num6;
    multiplicacao = num5 * num6;
    std::cout << num5 << " x " << num6 << " �: " << multiplicacao << std::endl;

    std::cout << "Agora vamos dividir, digite um n�mero: ";
    std::cin >> num7;
    std::cout << "Por quanto voc� gostaria de dividir? ";
    std::cin >> num8;
    divisao = num7 / num8;
    std::cout << "a divis�o entre " << num7 << " e " << num8 << " �: " << divisao << std::endl;

    std::cout << "Por ultimo vamos ao resto da divis�o, digite um n�mero: ";
    std::cin >> num9;
    std::cout << "Digite mais um n�mero: ";
    std::cin >> num10;
    resto = num9 % num10;
    std::cout << "O resto da divis�o entre " << num9 << " e " << num10 << " �: " << resto << std::endl;
 

    system("PAUSE");
    return 0;
}

