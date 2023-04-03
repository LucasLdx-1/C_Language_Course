// Exercício 009.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float raio, altura, volume; // Declaração das Variáveis 

    printf("\t \t \t VOLUME DE UMA LATA CILINDRICA \n"); // Título impresso ao usuário
    printf("Para calcularmos o volume, digite o raio do cilindro:  "); //Imprimir pedido de digitação do raio
    scanf_s("%f", &raio);  // Aplicar o valor %f a variavel raio
    printf("Agora, digite a altura do cilindro:  "); // Imprimir o pedido de digitação da altura 
    scanf_s("%f", &altura); // Aplicar o valor %f a variavel altura 


    volume = 3.14159 * raio * raio * altura; // Calculo do volume do cilindro

    printf("O volume do cilindro com altura %.2f e raio %.2f e: %.2f cm^3 \n", altura, raio, volume); // Imprimir na tela do usuário o volume do cilindro

    system("pause");
}
