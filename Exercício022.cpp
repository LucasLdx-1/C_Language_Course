// Exercício 022.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numero;

    printf("Digite um numero de 0 a 10: ");
    scanf_s("%d", &numero);

	switch (numero)
	{
	case 1:
		printf("Um \n");
		break;
	case 2: 
		printf("Dois \n");
		break;
	case 3:
		printf("Tres \n");
		break;
	case 4:
		printf("Quatro \n");
		break;
	case 5:
		printf("Cinco \n");
		break;
	case 6:
		printf("Seis \n");
		break;
	case 7:
		printf("Sete \n");
		break;
	case 8:
		printf("Oito \n");
		break;
	case 9: 
		printf("Nove \n");
		break;
	case 10:
		printf("Dez \n");
		break;

	default:
		printf("Numero invalido, digite um numero de 1 ate 10. \n");
		break;
	}

	system("pause");

}

