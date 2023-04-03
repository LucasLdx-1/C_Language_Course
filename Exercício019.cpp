// Exercício 019.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float salario, taxaINSS, salarioBruto, valorDescontado, taxa; // declaração de variáveis 

    /* ENTRADA */

    printf("\t \t \t SALARIO BRUTO \n"); // TÍTULO IMPRIMIDO NA TELA DO USUÁRIO 
    printf("Digite seu salario: ");
    scanf_s("%f", &salarioBruto);
    
    /* PROCESSAMENTO */

    if (salarioBruto <= 1317.07) // Avalia se teste for verdadeiro
        taxaINSS = 0.08; // se vedadeiro, então condição1
    else if (salarioBruto <= 2195.12) // se o teste anterior não for verdadeiro, então se verdadeiro
        taxaINSS = 0.09; // será condição2
    else // se nenhuma das anteriores, então
        taxaINSS = 0.11; // condição3

    salario = salarioBruto - (taxaINSS * salarioBruto); // aribuição de valor a variável salario
    valorDescontado = taxaINSS * salarioBruto; // Atribuição de valor a variável valorDescontado
    taxa = taxaINSS * 100; // Atribuição de valor a variável taxa

    /* SAÍDA */

    printf("Salario bruto..........: R$ %.2f \n", salarioBruto); // imprime na tela do usuário o dado anexado a variavel float
    printf("Taxa de INSS...........: %.0f%% \n", taxa); // imprime na tela do usuário o dado anexado a variavel float 
    printf("Valor descontado INSS..: R$ %.2f \n", valorDescontado); // imprime na tela do usuário o dado anexado a variavel float
    printf("Salario liquido........: R$ %.2f \n", salario); // imprime na tela do usuário o dado anexado a variavel float

    system("pause");
}


