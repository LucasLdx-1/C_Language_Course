// Exercício 026.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int soma = 0, numero;

    for (int i = 0; i <= 10; i++)
    {
        printf("Digite um numero: ");
        scanf_s("%d", &numero);
        soma = soma + numero;
    }

    printf("A soma de todos os numero é %d \n", soma);

    system("pause");
}


