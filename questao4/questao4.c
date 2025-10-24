#include <stdio.h>

int main() {
    int numero, quantidade = 0;
    
    do{
    	printf("Digite um numero inteiro positivo: ");
    	scanf("%d", &numero);
	} while(numero<0);
	
    
    
    if (numero == 0) {
        quantidade = 1;
    } else {
        while (numero > 0) {
            quantidade++;
            numero = numero / 10;
        }
    }
    
    printf("O numero inserido tem %d digitos\n", quantidade);
    
    return 0;
}