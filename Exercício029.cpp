// Exercício 029.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numero, qunatidadeDigitada = 0; // Declaração das variaveis numero e soma inicializada em 0, pois será colocana na estrutura de repetição

	numero = 0;
	while (numero >= 0)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		qunatidadeDigitada++;
	}

	printf("A quantidadde de numero digitada eh igual a %d \n", qunatidadeDigitada);

	system("pause");
}

