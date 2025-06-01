#include <stdio.h>

int main() {
    int i;

   
    printf("Movimento da peça Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
   
    printf("Movimento da peça Bispo (5 casas na diagonal):\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }
    
    printf("Movimento da peça Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);
}
