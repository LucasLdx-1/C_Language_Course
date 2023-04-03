// Exercício 011.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int nota1, nota2, nota3, mediaFinal; // Declaração das variáveis 

    // ENTRADA

    printf("\t \t \t PONTUACAO MEDIA \n"); // IMPRIMIR TÍTULO
    printf("Digite a nota referente ao primeiro periodo: "); // IMPRIMIR SOLICITAÇÃO DA NOTA1
    scanf_s("%d", &nota1); // ATRIBUIR VALOR A VARIAVEL NOTA1 PELA SCAN
    printf("Digite a nota referente ao segundo periodo: "); // IMPRIMIR SOLICITAÇÃO DA NOTA 2
    scanf_s("%d", &nota2); // ATRIBUIR VALOR A VARIAVEL NOTA2 PELA SCAN
    printf("Digite a nota referente ao terceiro periodo: "); // IMPRIMIR SOLICITAÇÃO DA NOTA 3
    scanf_s("%d", &nota3); // ATRIBUIR VALOR A VARIAVEL NOTA3 PELA SCAN

    // PROCESSAMENTO

    mediaFinal = (nota1 + nota2 + nota3) / 3;

    // SAÍDA 

    printf("Media final: %d \n", mediaFinal);

    system("pause");
}


