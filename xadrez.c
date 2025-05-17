#include <stdio.h>
 
int main(){
    // declarando as variáveis
    int rainha = 0, bispo = 0, torre = 0;

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
    printf("---------------------------------\n ");
    printf("END GAME\n");

 }
