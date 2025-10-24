#include <stdio.h>

int main (){
	int m[3][3];

	printf("Insira os numeros da matriz: \n");
	for(int i=0;i<3;i++){
		for (int j=0; j<3; j++){
			printf("Posicao [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	return 0;
}
