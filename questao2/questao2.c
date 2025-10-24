#include <stdio.h>

int main(){
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	if (b>a){
		for(int i=a+1; i<b; i++){
			printf("%d ", i);
		}
	} else {
		for(int i=b+1; i<a; i++){
			printf("%d ", i);
		}
	}
	
	
	return 0;
}