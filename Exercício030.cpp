// Exercício 030.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numint, somaPositivos = 0, somaNegativos = 0; // Declaração das variáveis, se inicializando em 0, pois o numero zero não pode ser cntabilizado

    numint = 1; // Inicialização da variavel 
    while (numint != 0) // Função while para somar numeros inteiros e positivos, lendo- os até um numero 0
    {
        printf("Digite um numero contido dentro do conjunto dos numeros inteiros: "); // mostrar na tela o pedido de digitação
        scanf_s("%d", &numint); // Ler o dado numint

        if (numint >= 1) // testar se positivo, e somar positivos
        {
            somaPositivos = somaPositivos + numint;
        }
        else // se não positivo, será negativo, então somar 
        {
            somaNegativos = somaNegativos + numint;
        }
    }

    printf("O somatório dos numeros positivos: %d \n ", somaPositivos);
    printf("O somatório dos numeros negativos: %d \n ", somaNegativos);

    system("pause");
}


