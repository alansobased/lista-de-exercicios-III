#include <stdio.h>

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	// laura sei q vc nunca mostrou isso aq mas sei do java nao eh chat </3
	if(n>0) printf("Positivo\n");
	else if (n<0) printf("Negativo\n");
	else printf("Zero\n");

	return 0;
}
