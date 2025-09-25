#include <stdio.h>
    int main(){
        int torre = 1, bispo = 1, rainha, cavalo = 1;

        // Torre se move em linha reta (5 casas para a direita)
        // Usando loop while

        printf("\n[Torre]\n");
        while (torre <= 5)
        {
            printf("Direita\n");
            torre++;
        }

        // O bispo se move na diagonal: "Cima, Direita"
        // O loop será executado 5 vezes (usando do-while)

        printf("\n[Bispo]\n");
        do
        {
           printf("Cima, Direita\n");
           bispo++;
        }  while (bispo <= 5);

        // A rainha pode se mover em todas as direções
        // Aqui vai andar 8 casas para a esquerda (usando for)

        printf("\n[Rainha]\n");
        for (rainha = 1; rainha <= 8; rainha++)
        {
            printf("Esquerda\n");
        }
        
        // Cavalo: movimento em "L"
        // Usando loops aninhados (while + for)
        
        printf("\n[Cavalo]\n");
        while (cavalo <= 1) {
        for (int mov = 1; mov <= 2; mov++) {
            printf("Baixo\n");  
        }
        printf("Esquerda\n");   
        cavalo++;
        }
    
        
    return 0;
}