/*
CALCULADORA DO IMC
*/

#include <iostream>

int main()
{
    float peso, altura, imc ; // Declaração das variáveis
    char primeiroNome[20]; // Declaração de variáveis 

    printf("\t \t \t IMC - Indice de Massa Corporal \n"); // Título impresso na tela

    /* ENTRADAS */


    printf("O Indice de massa corporal e um indicador adotado pela OMS (Organizacao Mundial de Saude), que e usado para o diagnostico do baixo peso, sobrepeso e da obesidade. O IMC pode ser facilmente calculado a partir de dois simples dados: peso e altura. \n"); // Comentário sobre programa, imprime com printf
    printf("Agora, para personalizarmos seu nome em nossa analise, digite seu primeiro nome: "); // Solicita~ção de dados para atribuição
    gets_s(primeiroNome); // Atribuição de valor a variavel do tipo char
    printf("Para calcularmos vosso IMC, digite seu peso em kg: "); // Imprime o pedido de dado p variável
    scanf_s("%f", &peso); // Atribui valor a variavel do tipo float 
    printf("Agora, digite sua altura em metros: ");  // Imprime o pedido de dado p variável
    scanf_s("%f", &altura); // Atribui valor a variavel do tipo float
    

    /* PROCESSAMENTO */

    imc = peso / (altura * altura); // Atribuir valor a variável IMC do tipo float

    if (imc <= 16) // Avalia se a condição do indice é verdadeira, se imc <=16
        printf("%s voce esta com peso baixo muito grave, sugiro que procure um medico/nutricionista e que coma mais :), pois seu IMC esta %.2f. \n", primeiroNome, imc); // Comando1, se IF for verdadeira
    if (imc > 16 && imc < 16.99) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("%s voce esta abaixo do peso, isso e grave coma mais um pouco, pois seu IMC esta %.2f. \n", primeiroNome, imc); // Comando1, se IF for verdadeira
    if (imc >= 17 && imc <= 18.49) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("%s voce esta abaixo do peso ideal, so comer um hamburguer podrao e voce chega la, seu IMC esta %.2f e voce precisa chegar a 20 para estar saudavel. \n", primeiroNome ,imc); // Comando1, se IF for verdadeira
    if (imc >= 18.50 && imc <= 24.99) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("%s parabens! Voce esta no peso normal. Continue manerando na pizza e sorvete, assim continuara fini :), seu IMC esta em %.2f. \n", primeiroNome, imc); // Comando1, se IF for verdadeira
    if (imc >= 25 && imc <= 29.99) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("Hum %s, voce esta um pouco gordo(a), sugiro que manere nos fast-foods, seu IMC esta em %.2f, se cuide para nao chegar a obesidade tipo 1. \n", primeiroNome, imc); // Comando1, se IF for verdadeira
    if (imc >= 30 && imc <= 34.99) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("Vixxi, meu/minha amigo(a) %s voce esta fofo(a), seu IMC esta em %.2f. Faca uma dieta e inicie uma pratica regular de exercicios fisicos. \n ", primeiroNome, imc); // Comando1, se IF for verdadeira
    if (imc >= 35 && imc <= 39.99) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("%s voce precisa mudar seus habitos alimentares e fisicos imediatamente. Voce esta na obesidade tipo 2, pois seu IMC esta em %.2f. \n", primeiroNome, imc); // Comando1, se IF for verdadeira
    if (imc > 40) // Avalia se a condição do indice é verdadeira, se imc compreende o intervalo de teste
        printf("%s voce precisa buscar ajuda de um profissional da saude urgente, pois voce se encontra na obesidade morbida. Seu IMC esta em %.2f. Eu acredito em voce! \n", primeiroNome, imc); // Comando1, se IF for verdadeira



    system("pause"); // Congela o programa na tela, para interação do usuário
}

