#include <stdio.h>

int main(){
    
    int Ra,Bis,torr;

    int movimento1,movimento2,movimento3;

    Bis = 1;

    movimento1=5;

 

    while (Bis<=movimento1)
    {

        printf("Movimentando a peça Bispo: %dA \n",Bis);
        
        Bis++;       


    }

    for (Ra = 8; Ra >= 3; Ra--)
    {
        
        printf("Rainha saiu de 3H andou para  %dA\n",Ra);
        
    }

    printf("\nTorre movimento:\n");
    int torre = 1;
    do {
        printf("Esquerda\n");
        torre++;
    } while (torre<=8);

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= 8);

    
    printf("\nMovimento do Cavalo:\n");

    
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");

        int dummy = 0;
        do {
            dummy++;
        } while (dummy < 1);
    }

    
    int movimentoFinal = 0;
    while (movimentoFinal < 1) {
        printf("Esquerda\n");
        movimentoFinal++;
    }

    void moverTorre(int casasRestantes){
        if (casasRestantes == 0)
         return;
        printf("Direita\n");
        moverTorre(casasRestantes - 1);
    }
    
    void moverRainha(int casasRestantes) {
        if (casasRestantes == 0) return;
        printf("Esquerda\n");
        moverRainha(casasRestantes - 1);
    }
    
    void moverBispoRecursivo(int casasRestantes) {
        if (casasRestantes == 0) return;
        printf("Cima Direita\n");
        moverBispoRecursivo(casasRestantes - 1);
    }
    
    void moverBispoComLoops(int casas) {
        for (int i = 0; i < casas; i++) { 
            for (int j = 0; j < 1; j++) { 
                printf("Cima Direita\n");
            }
        }
    }
   

    void moverCavalo() {
        printf("Movimento do Cavalo:\n");
        int movimentos = 0;
    
        for (int i = 0; i < 3; i++) {
            int j = 0;
            while (j < 3) {
                if (i < 2 && j == 0) {
                    printf("Cima\n");
                    movimentos++;
                    j++;
                    continue; 
                                }
                if (i == 2 && j == 1) {
                    printf("Direita\n");
                    movimentos++;
                    break; 
                }
                j++;
            }
        }
    }
    
    int main() {
        printf("Movimento da Torre:\n");
        moverTorre(5);
    
        printf("\nMovimento do Bispo (Recursivo):\n");
        moverBispoRecursivo(5);
    
        printf("\nMovimento do Bispo (Com Loops):\n");
        moverBispoComLoops(5);
    
        printf("\nMovimento da Rainha:\n");
        moverRainha(8);
    
        printf("\n");
        moverCavalo();
     

    }    
}













