#include <stdio.h>
 
int main(){
    // declarando as variáveis
    int rainha = 0, bispo = 0, torre = 0;
    int cavalo = 0; 

    printf("Bem vindo ao jogo de Xadrex \n");

    // usando o FOR para fazer a manipulações com a TORRE
    for (torre = 0; torre < 5; torre ++){
        printf("Torre indo para direita uma casa \n");
    }
    // usando o DO WHILE para fazer a manipulações com a BISPO
    do {
        printf("Bispo indo para CIMA E DIREITA \n");
        bispo ++; 
    } while (bispo < 5);

    // usando o WHILE para fazer a manipulações com a RAINHA
    while (rainha < 8){
        printf("Rainha indo para ESQUERDA\n");
        rainha ++; 
    }

    // Jogada da peça cavalo Com dois FOR aninhado
    while (cavalo <=1){

        for(cavalo = 1; cavalo <=2; cavalo++){
            printf("CAVALO BAIXO \n");
    }

    printf("CAVALO ESQUERDA\n");
    cavalo ++;
    }

    printf("---------------------------------\n ");
    printf("FIM DE JOGO \n");

 }
