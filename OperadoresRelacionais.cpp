// Operadores Relacionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	int valorA, valorB;

	printf("Digite um valor: ");
	scanf_s("%d", &valorA);
	printf("Digite outro valor: ");
	scanf_s("%d", &valorB);

	printf("valorA > valorB resulta em %d \n", valorA > valorB);
	printf("valorA >= valorB resulta em %d \n", valorA >= valorB);
	printf("valorA < valorB resulta em %d \n", valorA < valorB);
	printf("valorA <= valorB resulta em %d \n", valorA <= valorB);
	printf("valorA == valorB resulta em %d \n", valorA == valorB);
	printf("valorA != valorB resulta em %d \n", valorA != valorB);



	system("pause");
}

