// Exercício 021.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    
    int codigo; // Declaração das variáveis 

    printf("Digite um codigo: ");
    scanf_s("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Panela \n");
        break;
    case 2:
        printf("Chaleira \n");
        break;
    case 3:
        printf("Prato \n");
        break;
    default:
        printf("Codigo digitado eh invalido \n");
        break;
    }

    system("pause");
}

