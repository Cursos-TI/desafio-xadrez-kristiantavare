#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    #include <stdio.h>

int main() {
    // Variáveis para quantidade de movimentos
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // 🏰 Movimentação da Torre (FOR) - 5 casas para a direita
    printf("Movimentacao da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita %d\n", i);
    }

    // ♝ Movimentação do Bispo (WHILE) - 5 casas na diagonal (Cima, Direita)
    printf("\nMovimentacao do Bispo:\n");
    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima Direita %d\n", j);
        j++;
    }

    // 👑 Movimentação da Rainha (DO-WHILE) - 8 casas para a esquerda
    printf("\nMovimentacao da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= movimentoRainha);


    return 0;
}
