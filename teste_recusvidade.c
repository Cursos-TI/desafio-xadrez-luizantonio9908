# include <stdio.h>

// criando função mover o bispo
void moverbispo(int casa){
    if (casa > 0){
        printf("BISPO Direita\n");
        printf("BISPO CIMA\n"); 

        moverbispo(casa -1); 
    }
}

// criando função mover a torre
void movertorre(int casa){
    if (casa > 0){
        printf("TORRE DIREITA \n");

        movertorre(casa -1);
    }
}

// criando função mover a rainha
void moverrainha (int casa){ 

    if (casa > 0){
        printf("RAINHA ESQUEDA \n");
        moverrainha (casa - 1); 
    }
}

int main (){

    // chamando a função bispo
    int bispojogada = 5;
    moverbispo(bispojogada); 

    // chamando a função torre
    int torrejogada = 5;
    movertorre(torrejogada);

    // chamando a função rainha
    int rainhajogada = 8;
    moverrainha(rainhajogada);

    // declarando e fazendo a jogada com o cavalo
    int cavalo = 0; 
    while (cavalo <=1){

        for(cavalo = 1; cavalo <=2; cavalo++){
            printf("CAVALO CIMA \n");
        }   
    
    printf("CAVALO DIREITA\n");
    cavalo ++;
    }
}