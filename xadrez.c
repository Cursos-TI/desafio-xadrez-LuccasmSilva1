#include <stdio.h>




int main() {
    //TORRE
    int Torre = 5; //Casa que a torre vai mover

    printf("\nTorre se movendo:\n");

    for (int i = 1; i <= Torre; i++) {
        printf("Direita\n");
    }
    //BISPO
    int Bispo = 5; // casas que o bispo vai mover
    int movBispo = 1;

    printf("\nBispo se movendo\n");

    while (movBispo <= Bispo) {
        printf("Cima, Direita\n");
        movBispo++;
    }
    // RAINHA
    int Rainha = 8; //casas que a rainha vai mover
    int movrainha = 1;

    printf("\nRainha se movendo\n");

    do {
        printf("Esquerda\n");
        movrainha++;
    } while (movrainha <= Rainha);
    
    return 0;
}