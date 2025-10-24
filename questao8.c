#include <stdio.h>

int main (){
	int arr[10];
	int idxMaior, idxMenor;
	
	printf("Insira os numeros do array: \n\n");
	for(int i=0; i<10; i++){
		printf("posicao [ %d ]: ", i);
		scanf("%d", &arr[i]);
	}

	idxMaior = 0;
	for(int i=1; i<10; i++){
		if(arr[i] > arr[idxMaior]){
			idxMaior = i;
		}
	}

	idxMenor = 0;
	for(int i=1; i<10; i++){
		if(arr[i] < arr[idxMenor]){
			idxMenor = i;
		}
	}

	printf("\n\nIndex do maior: %d\nIndex do menor: %d\n", idxMaior, idxMenor);

	return 0;
}
