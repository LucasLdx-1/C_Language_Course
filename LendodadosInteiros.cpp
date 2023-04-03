// Lendo dados Inteiros.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int valorA, valorB, soma;    // Declaração das Variáveis 

    printf("Digite um numero:  ");
    scanf_s("%d", &valorA);
    printf("Digite outro numero:  ");
    scanf_s("%d", &valorB);


    soma = valorA + valorB;

    printf("Resultado da soma: %d \n", soma);
    printf("%d + %d = %d \n", valorA, valorB, soma); 



    system("pause");
}

