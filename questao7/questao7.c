#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[50];
    int unicos[50];
    int i, j, qtdUnicos = 0;
    int repetido;

    srand(time(NULL));

    printf("Array original:\n");
    for (i = 0; i < 50; i++) {
        arr[i] = rand() % 20;
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    for (i = 0; i < 50; i++) {
        repetido = 0;
        for (j = 0; j < qtdUnicos; j++) {
            if (arr[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            unicos[qtdUnicos] = arr[i];
            qtdUnicos++;
        }
    }

    printf("Array com numeros unicos:\n");
    for (i = 0; i < qtdUnicos; i++) {
        printf("%d ", unicos[i]);
    }

    printf("\n");

    return 0;
}
