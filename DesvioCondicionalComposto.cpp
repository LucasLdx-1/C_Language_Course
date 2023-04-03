// Desvio Condicional Composto.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	int numero; // Declaração das variaveis

	printf("Digite um numero, iremos avaliar se e positivo ou negativo: ");
	scanf_s("%d", &numero);

	if (numero > 0)
		printf("O numero %d eh POSITIVO \n", numero);
	else
	{
		printf("O numero %d eh NEGATIVO \n", numero);
	}


	system("pause");
}


