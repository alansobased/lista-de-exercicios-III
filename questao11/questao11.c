#include <stdio.h>

int main (){
	int arr[10];
	int apareceu;
	int qtd;
	
	
	printf("Digite os numeros do array:\n\n");
	for (int i=0; i<10; i++){
		printf("Numero da posicao [%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	for (int i=0; i<10; i++){
		qtd = 1;
		apareceu = 0;
		
			
		for(int k=0; k<i; k++){	
			if(arr[i] == arr[k]){
				apareceu = 1;
				break;
			}
		}
		
		if(apareceu == 0){
			for(int j=i+1; j<10; j++){
				if(arr[i] == arr[j]){
					qtd++;
				}
			}
			printf("Numero %d apareceu %d vezes.\n", arr[i], qtd);
		}
		
	}
	
	
	return 0;
}