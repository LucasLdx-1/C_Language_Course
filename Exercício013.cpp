// Exercício 013.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numero; // Declaração das Variaveis 

    printf("Digite um numero qualquer, testaremos se ele eh maior do que 1000: "); // Imprime a solicitação de dados
    scanf_s("%d", &numero); //Ler os dados da variável numero 

    if (numero > 1000) // Se o numero lido for maior do que 1000
        printf("%d eh maior do que 1000 \n", numero); // Se sim, esta mensagem será impressa na tela 

    system("pause"); // Pausar o programa na tela, para o usuário poder interagir 
}

 
