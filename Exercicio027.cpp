// Exercicio 027.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	int numero, somaPositivo, somaNegativo, quantidadeZeros;

	numero = somaNegativo = somaPositivo = quantidadeZeros = 0;

	for (int i = 0; i <= 20; i++)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		if (numero > 0)
			somaPositivo = somaPositivo + numero;
		else if (numero < 0)
			somaNegativo = somaNegativo + numero;
		else
			quantidadeZeros++;
	}

	printf("A soma dos numeros negativos eh de %d e a soma dos numeros positvos eh de %d \n", somaNegativo, somaPositivo);
	printf("A quantidade de zeros foi de %d casas \n", quantidadeZeros);
}


