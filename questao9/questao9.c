#include <stdio.h>

int main(){
	int arr[8];
	int temp;
	
	printf("Digite os numeros do array:\n\n");
	for (int i=0; i<8; i++){
		printf("Numero da posicao [%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<8-1; i++){
		for(int j=i+1; j<8; j++){
			
			if(arr[j] < arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
	
	printf("\n\nArray final:\n\n[ ");
	for (int i=0; i<8; i++){
		printf("%d ", arr[i]);
	}
	printf("]\n");
	
	
	return 0;
}