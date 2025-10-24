#include <stdio.h>

int main(){
	int arr[10];
	
	printf("Insira os numeros do seu array: \n");
	for(int i=0; i<10; i++){
		printf("Insira o numero da posicao [%d]: ", i);
		scanf("%d", &arr[i]);
	}	
	
	int repetido;
	
	for(int i=0; i<10; i++){
		repetido = 0;
		
		for(int j=0; j<10; j++){
			
			if(arr[i] == arr[j] && i!=j){
				repetido = 1;
			}
		}
		
		if(repetido == 0){
			printf("%d ", arr[i]);
		}
		
	}
	
	return 0;
}