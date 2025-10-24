#include <stdio.h>

#define mz_sum(i) (mz[i][0] + mz[i][1] + mz[i][2])

int main(){
	int mz[3][3];
	int maior;


	printf("Insira os numeros da matriz: \n");
	for(int i=0;i<3; i++){
		for (int j=0; j<3; j++){
			printf("Posicao [%d][%d]: ", i, j);
			scanf("%d", &mz[i][j]);
		}
	}

	maior= 0;
	for(int i=1; i<3; i++){

		if(mz_sum(i) == mz_sum(maior)){
			printf("Linha %d e maior sao iguais\n", i);
			continue;
		}


		if(mz_sum(i) > mz_sum(maior)){
			maior = i;
		}

	}

	printf("A linha %d tem a maior soma!!\n", maior);

	return 0;
}
