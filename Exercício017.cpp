// Exercício 017.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float receita, despesa, situacao; // DECLARAÇÃO DE VARIAVEIS 

    /* ENTRADA */

    printf("\t \t \t DEMONSTRACAO RESULTADO DO EXERCÍCIO \n"); // IMPRIME O TÍTULO 
    printf("Digite a receita do ano anterior: "); // IMPRIME A SOLICITAÇÃO DE VARIÁVEL 
    scanf_s("%f", &receita); // ATRIBUI VALOR A VARIÁVEL 
    printf("Digite a despesa do ano anterior: "); // IMPRIME A SOLICITAÇÃO DE VARIÁVEL 
    scanf_s("%f", &despesa); // ATRIBUI VALOR A VARIÁVEL 

    /* PROCESSAMENTO */

    situacao = receita - despesa; // ATRIBUI VALOR A VARIÁVEL 

    /* SAÍDA */

        if (situacao > 0) // AVALIA, SE VERDADEIRO O TESTE, ENTAO 
        {
            printf("A empresa se encontra superavitaria com lucro de %.2f no ano anterior. \n", situacao); // COMANDO1 
        }
        else // SE TESTE NÃO VERDEIRO, ENTÃO 
        {
            printf("A empresa se encontra deficitaria com prejuizo de %.2f no ano anterior. \n", situacao); // COMANDO1.0
        }
    system("pause"); //CONGELA A TELA PARA INTEAÇÃO COM USUÁRIO 
}


