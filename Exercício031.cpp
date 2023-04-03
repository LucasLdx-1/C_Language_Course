// Exercício 031.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int numero, soma = 0, qtdlido = 0;
    float media;
    char resposta = 's';
     
    while (resposta == 's')
    {
        printf("Digite um numero: ");
        scanf_s("%d", &numero);

        soma += numero;
        qtdlido++;

        printf("Deseja digitar outro numero (s/n)? ");
        resposta = _getwch();
        printf("\n\n");
    }
    media = soma / qtdlido;
    printf("A medida dos numeros lidos foi: %f \n", media);
}


