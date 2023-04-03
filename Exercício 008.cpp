// Exercício 008.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float quilometragemInicial, quilometragemFinal, distanciaPercorrida; // Declaração de variáveis 

    printf(" \t \t \t VAMOS EMBARCAR COM MAIS ECONOMIA \t \t \t \n"); // Título de interação com usuário
    printf("Para calcularmos a distancia percorrida, digite a quilometragem inicial do veiculo:  "); //Solicitar o km inicial
    scanf_s("%f", &quilometragemInicial); // Atribuição de valores para variavel usando a função scan
    printf("Agora digite a quilometragem final:  "); // Solicitar o km final 
    scanf_s("%f", &quilometragemFinal); // Atribuição de valores para variavel usando a função scan

    distanciaPercorrida = quilometragemFinal - quilometragemInicial; // Processamento do cálculo das variáveis, objetivo achar a distancia percorrida 

    printf("A distancia percorrida foi: %.2f \n", distanciaPercorrida); //Imprime na tela do usuário a distancia percorrida 




    system("pause");
}

