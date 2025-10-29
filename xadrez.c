#include <stdio.h>

//torre
void torre(int casas)
{
    if (casas == 0) return; 
    printf("Direita\n");
    torre( casas - 1);
}
//bispo
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
//rainha
void rainha(int casas)
{
    if(casas == 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}
//cavalo
void cavalo(int vertical , int horizontal)
{
    if(vertical > 0){
        printf("cima\n");
        cavalo(vertical - 1 , horizontal);
    }
    else if (horizontal > 0){
        printf("direita\n");
        cavalo(vertical,horizontal - 1);
    }

}
int main() {
   
    //movimento da torre
    printf("\nTorre se movendo:\n");
    torre(5);
    //movimento do bispo
    printf("\nBispo se movendo:\n");
    bispo(5);
    //movimento da rainha
    printf("\nRainha se movendo:\n");
    rainha(8);
    //movimento do cavalo
    printf("\nCavalo se movendo:\n");
    cavalo(2,1);
    
    
    return 0;
}