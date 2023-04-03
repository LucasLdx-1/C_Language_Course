// Estrturas de Repetição.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numero, resultado;

    for  (int i = 0; i <= 5; i++)
    {
        printf("Digite um numero: ");
        scanf_s("%d", &numero);
        resultado = numero * 3;
        printf("O resultado foi; %d \n", resultado);
    }
   


    return 0;
}


