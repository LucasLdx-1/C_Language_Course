// Exercício 020.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float salarioHora, quantidadeHoras, salarioBruto, salarioFamilia, mesada; // Declaração das variáveis
    int qunatidadeFilhos; //Declaração de variaveis 

    /* ENTRADA */
    
    printf("Digite seu salario hora: "); // Solcitação de dados para atribuir a variavel salario/hora
    scanf_s("%f", &salarioHora); // Atribuição de valor a salario hora, variavel float
    printf("Digite a quantidade de horas trabalhadas: ");// Solcitação de dados para atribuir a variavel hora
    scanf_s("%f", &quantidadeHoras); // Atribuição de valor a quantidade de horas, variavel float
    printf("Quantos filhos voce tem: "); // Solcitação de dados para atribuir a variavel quantidade de filhos 
    scanf_s("%d", &qunatidadeFilhos); // Atribuição de valor a quantidade de filhos, variavel float
    
    /* PROCESSAMENTO */

    salarioBruto = salarioHora * quantidadeHoras; // Atribuição de valor a variavel salario bruto

    if (salarioBruto <= 700.00) // Se teste verdadeiro, então
        mesada = 8.50; // Comando será executado
    else if (salarioBruto <= 1000.00) // Senão verdadeira o ultimo teste, então, se verdadeiro o teste 2, então
        mesada = 6.50; // comando será executado
    else // Se não satisfeitas nenhum dos testes anteriores, então 
        mesada = 2.50; // Comando será executado

    salarioFamilia = mesada * qunatidadeFilhos; // Atribuição de valor a variavel salario familia

    /* SAÍDA */

    printf("Salario bruto......: R$ %.2f \n", salarioBruto); //Imprime para o usuário o salario bruto
    printf("Salario familia....: RS %.2f \n", salarioFamilia); // Imprime para o usuario o salario familia 


    system("pause"); // Pausar o programa na tela do usuário
}


