// Entrada Processamento e Saída de dados

// Volume de um paralelepípedo: Volume = comprimento * largura * altura 

#include <iostream>

int main()
{
    float volume, comprimento, largura, altura; // Declaração das Variáveis 

    /* ENTRADA DOS DADOS */

    printf("Digite o valor do comprimento:  "); // Comentário, interação com usuário
    scanf_s("%f", &comprimento);  // Atribuição do valor a variável comprimento pela função scan_f
    printf("Digite o valor da Largura:   "); // Comentário, interação com usuário
    scanf_s("%f", &largura); // Atribuição do valor a variável largura pela função scan_f
    printf("Digite o valor da Altura:  "); // Comentário, interação com usuário
    scanf_s("%f", &altura); // Atribuição do valor a variável altura pela função scan_f

    /*  PROCESSAMENTO DOS DADOS */

    volume = comprimento * altura * largura; // Atribuição do valor a variável volume

    /* SAÍDA DOS DADOS */

    printf("Volume do paralelepípedo %.2f \n", volume); // Imprimir na tela o volume do paralelepípedo

    system("pause");

}

