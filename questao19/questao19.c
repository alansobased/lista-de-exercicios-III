#include <stdio.h>

int main(){
	char p[100];
	int qtd=0;
	
	printf("Digite sua palavra: ");
	scanf("%s", p);
	
	for(int i=0; p[i] != '\0'; i++){
		if(p[i] == 'a' || p[i] == 'A'){
			qtd++;
		}
	}
	
	printf("\nSua palavra tem %d letras 'a'.\n", qtd);
	
	
	return 0;
}