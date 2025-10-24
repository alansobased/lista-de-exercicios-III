#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaLinha, somaColuna;
    int somaDiag1 = 0, somaDiag2 = 0;
    int i, j;
    int somaReferencia;
    int ehMagico = 1; 

    printf("Digite os elementos da matriz 3x3:\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somaReferencia = matriz[0][0] + matriz[0][1] + matriz[0][2];

    for (i = 0; i < 3; i++) {
        somaDiag1 += matriz[i][i];   
        somaDiag2 += matriz[i][2 - i]; 
    }

    if (somaDiag1 != somaReferencia || somaDiag2 != somaReferencia)
        ehMagico = 0;

    for (i = 0; i < 3; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for (j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if (somaLinha != somaReferencia || somaColuna != somaReferencia) {
            ehMagico = 0;
            break;
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    if (ehMagico)
        printf("\n A matriz e um quadrado magico!\n");
    else
        printf("\nA matriz NAO e um quadrado magico.\n");

    return 0;
}
