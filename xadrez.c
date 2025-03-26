#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Procedimentos para Nível Mestre - inicio
void bispo(unsigned short int n) {
    if(n > 0) {
        printf("Cima\n");
        printf("Direita\n");
        bispo(n-1);
    }
}
void torre(unsigned short int n) {
    if(n > 0) {
        printf("Direita\n");
        torre(n-1);
    }
}
void rainha(unsigned short int n) {
    if(n > 0) {
        printf("Direita\n");
        rainha(n-1);
    }
}
void cavalo(unsigned short int n) {
    if(n > 0) {
        printf("Baixo\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        cavalo(n-1);
    }
}
// Procedimentos para Nível Mestre - fim

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
    const unsigned int max_cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("BISPO\n");
    while(movimento_bispo <= max_bispo) {
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
    for(movimento_cavalo_i; movimento_cavalo_i < max_cavalo; movimento_cavalo_i++) {
        for(movimento_cavalo_j; movimento_cavalo_j <= max_cavalo; movimento_cavalo_j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    printf("\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Chamada dos procedimento Nível Mestre
    //Movimento BISPO
    printf("BISPO\n");
    bispo(5);
    //Movimento TORRE
    printf("TORRE\n");
    torre(5);
    //Movimento RAINHA
    printf("RAINHA\n");
    rainha(8);
    //Movimento CAVALO
    printf("CAVALO\n");
    cavalo(1);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    return 0;
}
