#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    
    // Nível Aventureiro - Movimentação do Cavalo

    // Nível Mestre - Funções Recursivas e Loops Aninhados

    /*
        Para simular todos os movimentos possíves que as peças podem realizar, bastaria re-utilizar as funções criadas, atribuindo 
        a informação da direção horizontal e vertical. Neste caso foi realizado a simulação de movimentos específicos solititados
        para a atividade.
    
        Ex:
    
        void movimentoTorre(int casas, char direcao){
            if (casas > 0)
            {
                printf("> %c \n", direcao); // Direita ou esqueda, cima ou baixo
                movimentoTorre_direita(casas - 1, direcao); 
            }
        }
    */
    
// Função recursiva do movimento da TORRE:
void movimentoTorre_direita(int casas) {  // Movimento para direita
    if (casas > 0)
    {
        printf("> Direita \n");
        movimentoTorre_direita(casas - 1); 
    }
}

// Função recursiva do movimento do BISPO:
void movimentoBispo_direita(int casasCima, int casasDireita) { // Movimento para diagonal direita
    while (casasCima > 0 )  
    {   
        printf("> Cima,"); 
        while (casasDireita >= casasCima) // Loop aninhado
        {
            printf(" Direita.\n");
            casasDireita--;
        }
        casasCima --;
    }
}

// Função recursivas do movimento da Rainha:
void movimentoRainha_direita(int casas) { // Movimento para direita
    if (casas > 0)
    {
        printf("> Direita \n");
        movimentoRainha_direita(casas - 1);
    }
}


// Função principal:
int main(){

    // Saída informando a peça que esta se movimentando:
    printf("\n-> Torre se move para:\n");

    movimentoTorre_direita(5); // Se move para direita

    // Saída informando a peça que esta se movimentando:
    printf("\n-> Bispo se move para:\n");

    movimentoBispo_direita(5, 5); // Se move para diagonal direita

    // Saída informando a peça que esta se movimentando:
    printf("\n-> Rainha se move para:\n");

    movimentoRainha_direita(8); // Se move para direta

    // Saída informando a peça que esta se movimentando:
    printf("\n-> Cavalo se move para:\n");

    // Movimentação do cavalo para cima e para direita:
    for (int cavalo = 0; cavalo <= 1; cavalo++)
    {    
        for (int i = 1; i <= 3; i++)
        {   
            if (i <= 2) continue;; // Caso menor que 2 casas, se move
        
            if (i == 2) break; // Se igual a 2 casas, finaliza
            
            printf("> Cima\n"); // Se move duas vezes
        }

        if (cavalo <= 0) continue;
        
        printf("> Direita\n"); // Se move uma vez

        if (cavalo == 1) break;
    }
    return 0;
}
    

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


