#include <stdio.h>

int main () {
	int matriz[4][4];
	int maior;

	printf("Insira o valor da matriz 4x4: \n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("Posicao [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}	
	}

	for(int i=0; i<4; i++){
		maior = matriz[i][0];
		for(int j=1; j<4; j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
		printf("\n\nMaior da linha [%d]: %d\n", i, maior);
	}


	return 0;
}
