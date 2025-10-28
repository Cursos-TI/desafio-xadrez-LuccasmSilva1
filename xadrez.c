#include <stdio.h>


void torre(int casas)
{
    if (casas == 0) return; 
    printf("Direita\n");
    torre( casas - 1);
}
void bispo(int casas)
{
    if(casas == 0)return;
    for(int i = 0; i < 1 ;i++ )
        {
            for(int j = 0; j < 1 ; j++)
                {
                    printf("Cima, Direita\n");
                }
        }
        bispo(casas - 1);
}

int main() {
   
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

    int movcavalovertical = 2; // casas que o cavalo vai se mover 
    int movcavalohorizontal = 1;

    printf("\nCavalo se movendo\n");
    for(int i = 1 ; i <= movcavalovertical ; i++ )
    {
        printf("Baixo\n");
    }
    int j = 1;
    while (j <= movcavalohorizontal)
    {
        printf("esquerda\n");
        j++;
    }
    
    return 0;
}