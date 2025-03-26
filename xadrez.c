#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    unsigned int movimento_bispo = 0;
    unsigned int movimento_torre = 0;
    unsigned int movimento_rainha = 0;
    unsigned int movimento_cavalo_i = 0;
    unsigned int movimento_cavalo_j = 0;
    const unsigned int max_bispo = 5;
    const unsigned int max_torre = 5;
    const unsigned int max_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("BISPO\n");
    while(movimento_bispo <= max_torre) {
        printf("Cima\n");
        printf("Direita\n");
        movimento_bispo++;
    }
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("TORRE\n");
    do {
        printf("Direita\n");
        movimento_torre++;
    } while(movimento_torre <= max_torre);
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("RAINHA\n");
    for(movimento_rainha; movimento_rainha <= max_rainha; movimento_rainha++) {
        printf("Esquerda\n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("CAVALO\n");
    for(movimento_cavalo_i; movimento_cavalo_i <= 1; movimento_cavalo_i++) {
        for(movimento_cavalo_j; movimento_cavalo_j <= 2; movimento_cavalo_j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    printf("\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
