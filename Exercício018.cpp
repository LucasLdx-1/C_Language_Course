// Exercício 018.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float salarioAntigo, salarioNovo, taxaReajuste; // DECLARAÇÃO DE VARIÁVEIS 

    /* ENTRADA */
    printf("\t \t \t REAJUSTE SALARIAL \n");
    printf("Digite seu salario: ");
    scanf_s("%f", &salarioAntigo);

    /* PROCESSAMENTO */
    
    if (salarioAntigo <= 1000.00)
        taxaReajuste = 0.15;
    else if (salarioAntigo <= 2000.00)
        taxaReajuste = 0.10;
    else
        taxaReajuste = 0.05;

    salarioNovo = salarioAntigo * taxaReajuste + salarioAntigo;

    /* SAÍDA */

    printf("Seu salario atual e de R$ %.2f, foi feito um reajuste de %1.2f%%. \n", salarioNovo, taxaReajuste * 100);

        return 0;
}

