// Exercício 005.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	int quilometragemInicial, quilometragemFinal, distanciaPercorrida;  // Declaração das variaveis inteiras de quilometragem de uma viagem de carro

	quilometragemInicial = 200000, quilometragemFinal = 207349, distanciaPercorrida = quilometragemFinal - quilometragemInicial; // Valor das variaveis 

	printf("\t\t Distancia Percorrida em uma viagem de carro \n\n");
	printf("Quilometragem Inicial do Veiculo...: %d \n", quilometragemInicial);
	printf("Quilometragem Final do Veiculo.....: %d \n", quilometragemFinal);
	printf("Distancia percorrida na viagem.....: %d \n", distanciaPercorrida);


	system("pause");
}

