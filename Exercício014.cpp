// Exercício 014.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int valorA, valorB; //Declaração das variáveis 

    printf("Digite um valor x: ");  //Imprimir solicitação de valor da variável
    scanf_s("%d", &valorA); // Ler o valor de X para comparar 
    printf("Digite um valor y: ");  // Imprimir solicitação do valor da variável
    scanf_s("%d", &valorB); // Ler o valor de Y 

    if (valorA > valorB) // Se verdadeiro valorA > valorB
        printf("X > Y, logo temos %d sendo o maior \n", valorA); // Se verdadeiro, então Condicional1
    else // Se não, então
    {
        printf("Y > X, logo temos %d sendo o maio \n", valorB); // Se falso, então condicional1
    }

    system("pause");
}

