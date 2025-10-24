#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int i, vogais = 0, consoantes = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    for (i = 0; palavra[i] != '\0'; i++) {
        char letra = tolower(palavra[i]);

        if (isalpha(letra)) {
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("\nA palavra '%s' tem:\n", palavra);
    printf("%d vogais\n", vogais);
    printf("%d consoantes\n", consoantes);

    return 0;
}
