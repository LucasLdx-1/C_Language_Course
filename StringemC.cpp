// String em C.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    char nome[80];

    printf("Digite um nome:  ");
    gets_s(nome);

    printf("O nome lido:  %s \n", nome);


    system("pause");
}


