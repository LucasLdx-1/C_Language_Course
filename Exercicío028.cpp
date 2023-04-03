// Exercicío 028.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int soma = 0; // Declaração da variavel soma inicializando em 0

    for (int i = 1; i < 101; i++) // Laço de repeticão (inicio, limite, i = i + 1)
    {
        soma = soma + i; // Atribuição de valor a variável, soma
        printf("%d \n", i); // Imprimir valor de i
    }

    printf("Soma igual a %d \n", soma); 

}

    
