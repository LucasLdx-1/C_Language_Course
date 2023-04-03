// Exercício 010.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	float receita, despesa, lucro; // Declaração das variaveis e sua natureza 

							// Entrada 

	printf("\t \t \t DEMONSTRACAO DO RESULTADO DO EXERCICIO \n"); // Título do aplicativo 
	printf("Para calcularmos a DRE, digite a receita anual em reais: R$  ");  // Solicitação de ditação de variável
	scanf_s("%f", &receita); // Atribuir valor a variável receita
	printf("Agora, digite em reais as despesas do ano: R$  "); //Imprimir solicitação de dado para despesa
 	scanf_s("%f", &despesa); // Atribuir valor a variável despesa

							// Processamento

	lucro = receita - despesa; // Processamento dos dados e atribuição de valor a variável lucro
		
							// Saída

	printf("DRE: %.2f - %.2f = %.2f \n", receita, despesa, lucro); // Imprimir o resultado na tela, demontrando o processamento
	printf("Lucro anual: R$ %.2f \n", lucro); // Imprimir o resultado na tela 






	system("pause");
}


