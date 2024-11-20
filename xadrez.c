#include <stdio.h>
#include <string.h> // Necessário para strcmp, usado na comparação de strings

int main()
{
    // Variáveis para representar as peças (não usadas diretamente, mas podem ser úteis no futuro)
    int bispo, torre, rainha;

    // Array para armazenar a escolha do usuário (nome da peça)
    char escolha[30];

    // Exibe mensagem solicitando ao usuário que escolha uma peça
    printf("Quem voce irá mover? bispo, torre ou rainha? \n");

    // Lê a entrada do usuário (nome da peça) e armazena na variável 'escolha'
    scanf("%s", escolha);

    // Verifica se a peça escolhida é o bispo
    if (strcmp(escolha, "bispo") == 0) // strcmp retorna 0 se as strings forem iguais
    {
        // Loop para simular o movimento do bispo em até 5 casas na diagonal
        for (int i = 1; i <= 5; i++)
            printf("O Bispo está se movendo %d casas na diagonal!\n", i);
    }
    // Verifica se a peça escolhida é a torre
    else if (strcmp(escolha, "torre") == 0)
    {
        // Loop para simular o movimento da torre em até 5 casas para a direita
        for (int i = 1; i <= 5; i++)
            printf("A Torre está se movendo %d casas para a direita!\n", i);
    }
    // Verifica se a peça escolhida é a rainha
    else if (strcmp(escolha, "rainha") == 0)
    {
        // Loop para simular o movimento da rainha em até 8 casas para a esquerda
        for (int i = 1; i <= 8; i++)
            printf("A Rainha está se movendo %d casas para a esquerda!\n", i);
    }
    else
    {
        printf("Faça uma esolha válida.");
    }

    // Encerra o programa
    return 0;
}
