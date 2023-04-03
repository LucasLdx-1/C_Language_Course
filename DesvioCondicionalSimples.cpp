// Desvio Condicional Simples.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/* 

ESCREVA UM PROGRAMA QUE LEIA UM NUMERO INTEIRO QUALQUER, E INFORME SE O NUMERO LIDO É POSITIVO. 

O QUE É UM NUMERO POSITIVO: TODO NUMERO NATURAL

*/

#include <iostream>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf_s("%d", &numero);

    if (numero > 0) // Desvio Condicional Simples 
        printf("Numero lido eh: POSITIVO \n");



    system("pause");
}
