// Exercício012.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	int anoNascimento, quantidadeDias, idade, diaNascimento, mesNascimento, anoAtual; // Declarando as Variáveis 
	float quantidadeHoras, quantidadeMinutos, quantidadeSegundo; // Declaraçaõ de Variáveis 
	char primeiroNome[20];

	/* ENTRADA */

	printf("\t \t \t HA QUANTOS DIAS, HORAS, MINUTOS E SEGUNDOS VOCE VIVE? \n"); // Título impresso na tela do usuário
	printf("Por gentileza, digite seu primeiro nome: ");
	gets_s(primeiroNome);
	printf("Digite o ano em que estamos: ");// Solicitar ao usuário valor para ser atribuído
	scanf_s("%d", &anoAtual);	 // Atribuição de valor a variável
	printf("Para calcularmos, digite o ano em que voce nasceu: ");  // Solicitar ao usuário valor para ser atribuído
	scanf_s("%d", &anoNascimento);	// Atribuição de valor a variável
	printf("Digite o seu dia de nascimento: ");  // Solicitar ao usuário valor para ser atribuído
	scanf_s("%d", &diaNascimento);  // Atribuição de valor a variável
	printf("Digite em que mes voce nasceu: ");  // Solicitar ao usuário valor para ser atribuído
	scanf_s("%d", &mesNascimento);	// Atribuição de valor a variável 
	 
	/* PROCESSAMENTO DOS DADOS */
	
	idade = anoAtual - anoNascimento;	// Atribuição de valor a variável e processamento dos dados coletados
	quantidadeDias = 365 * idade;	// Atribuição de valor a variável e processamento dos dados coletados
	quantidadeHoras = quantidadeDias * 24;	// Atribuição de valor a variável e processamento dos dados coletados
	quantidadeMinutos = quantidadeHoras * 60;	// Atribuição de valor a variável e processamento dos dados coletados
	quantidadeSegundo = quantidadeMinutos * 60;	// Atribuição de valor a variável e processamento dos dados coletados
	
	/* SAÍDA */

	printf("Tendo nascido em %d/%d/%d, ate o ano %d voce vieu %d dias, %f horas, %f minutos e %f segundos. \n \n", diaNascimento, mesNascimento, anoNascimento, anoAtual, quantidadeDias, quantidadeHoras, quantidadeMinutos, quantidadeSegundo);
	printf("Parabens %s! Espero que voce tenha ainda exponenciais anos de vida pela frente!! :) \n", primeiroNome); 

	system("pause");
}

