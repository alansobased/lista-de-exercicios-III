#include <stdio.h>

int main() {
    int n, final = 0, resto;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    int original = n; 
    
    while (n != 0) {
        resto = n % 10;        
        final = final * 10 + resto; 
        n = n / 10;      
    }
    
    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d", final);
    
    return 0;
}