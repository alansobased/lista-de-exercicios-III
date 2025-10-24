#include <stdio.h>

int main (){
	int n;
	int somaPar=0, somaImpar=0;
	
	printf("Digite a quantidade de numeros a serem recebidos: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("Digite os numeros do array:\n\n");
	for (int i=0; i<n; i++){
		printf("Numero da posicao [%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Seu array: [ ");
	for (int i=0; i<n; i++){
		printf("%d ", array[i]);
	}
	printf("]\n\n");
	
	for (int i=0; i<n; i++){
		if(array[i]%2 == 0){
			somaPar+= array[i];
		} else {
			somaImpar+= array[i];
		}
	}
	
	printf("Soma dos pares: %d\n", somaPar);
	printf("Soma dos impares: %d", somaImpar);
	
	
	return 0;
}