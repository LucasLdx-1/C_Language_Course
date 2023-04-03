// Exercício 016.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float valorA, valorB, dividirMaior; // Declaração de Variáveis

    printf("Digite um valor x: "); // Imprimir solicitação de dados
    scanf_s("%f", &valorA); // Ler dados para serem atribuidos
    printf("Digite um valor Y: "); // Imprimir solicitação de dados
    scanf_s("%f", &valorB); // Ler dados para serem atribuidos 

    if (valorA > valorB) // se verdadeiro
        dividirMaior = valorA / valorB; // então condicional 1
    else // se não
    {
        dividirMaior = valorB / valorA; // então condicional 1
    }

    printf("O valor da divisao do maior pelo menor sera: %.2f \n", dividirMaior);

    system("pause");
}
