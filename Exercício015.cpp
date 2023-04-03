// Exercício 015.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int valorA; // Declaração de variáveis

    printf("Digite um numero: ");
    scanf_s("%d", &valorA);

    if (valorA != 1000)
        printf("O valor %d e diferente que 1000 \n", valorA);
    else
    {
        printf("O valor %d e igual a 1000 \n", valorA);
    }



    system("pause");
}

