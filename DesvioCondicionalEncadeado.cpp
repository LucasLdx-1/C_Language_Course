// Desvio Condicional Encadeado.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numero; // DECLARAÇÃO DAS VARIÁVEIS

    printf("Digite um numero "); // IMPRIME O PEDIDO DIGITAÇÃO PELO USUÁRIO
    scanf_s("%d", &numero); // SCANEA O DADO E ATRIBUI A VARIÁVEL NUMERO

    if (numero > 0) // AVALIA SE VERDADEIRO O TESTE, ENTÃO
        printf("POSITIVO \n"); // COMANDO1
    else if (numero < 0) // SE NÃO SATISFEITA A CONDIÇÃO ANTERIOR, AVALIA SE VERDADEIRO OUTRO TESTE, ENTÃO
        printf("NEGATIVO \n"); // COMANDO2
    else // SE NENHUM DOS ANTERIORES, ENTAO
        printf("ZERO \n"); // COMANDO3

    system("pause"); //PAUSA O PROGRAMA AO DEPURAR NA TELA DO USUÁRIO 
}

