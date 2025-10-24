#include <stdio.h>

int main(){
	int arr1[5];
	int arr2[5];
	int resul=0;
	
	printf("Insira os numeros do array 1: \n");
	for(int i=0;i<5; i++){
		printf("Posicao [%d]: ", i);
		scanf("%d", &arr1[i]);
	}


	printf("Insira os numeros do array 2: \n");
	for(int i=0;i<5; i++){
		printf("Posicao [%d]: ", i);
		scanf("%d", &arr2[i]);
	}

	for(int i=0; i<5; i++){
		resul += arr1[i] * arr2[i];
	}

	printf("\nResultado: %d\n", resul);
	
	return 0;
}
