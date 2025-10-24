#include <stdio.h>

int main(){
	int mz[4][4];
	int diag=0;

	
	printf("Insira os numeros da matriz: \n");
	for(int i=0;i<4; i++){
		for (int j=0; j<4; j++){
			printf("Posicao [%d][%d]: ", i, j);
			scanf("%d", &mz[i][j]);
		}
	}

	for(int i=0; i<4; i++){
		diag += mz[i][i];
	}

	printf("Soma da diagonal: %d\n", diag);

	return 0;
}
