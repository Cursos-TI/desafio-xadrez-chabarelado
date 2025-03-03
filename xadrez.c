#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Variáveis inicializadas:
    int torre = 0, bispo = 0, rainha = 0;

    // Saída informando a peça que esta se movimentando:
    printf("\n-> Torre se move para:\n");

    // Movimentação da torre horizontalmente para direita (5 casas):
    for (; torre <= 5; torre++) {
        printf("> Direita\n");
    }

    printf("-------------------\n"); // Separação da movimentação

    // Movimentação da torre verticalmente para a cima (5 casas):
    for (torre = 0; torre <= 5; torre++) { // Inicializando novamente o valor da variável para executar o código.
        printf("> Cima\n");
    }
    
    // Saída informando a peça que esta se movimentando:
    printf("\n-> Bispo se move para:\n");

    // Movimentação do bispo para diagnonal direita (5 casas):
    while (bispo <= 5)
    {
        printf("> Cima, direita.\n");
        bispo ++;
    }

    printf("-------------------\n"); // Separação da movimentação
    
    // Movimentação do bispo para diagonal esquerda (5 casas):
    bispo = 0; // Inicializando novamente o valor da variável para executar o código.

    while (bispo <= 5)
    {
        printf("> Cima, Esquerda.\n");
        bispo ++;
    }

    // Saída informando a peça que esta se movimentando:
    printf("\n-> Rainha se move para:\n");

    // Movimentação da rainha para esquerda ( 8 casas):
    do {
        printf("> Esquerda\n");
        rainha ++;
    } while (rainha <= 8); 
  
    printf("-------------------\n"); // Separação da movimentação

    // Movimentação da rainha para direita ( 8 casas):
    rainha = 0; // Inicializando novamente o valor da variável para executar o código.
    do {
        printf("> Direita\n");
        rainha ++;
    } while (rainha <= 8); 

    return 0;


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
