#include <stdio.h>

int main(){
	char p1[100];
	char p2[100];
	int i=0;
	int igual=1;
	
	printf("Digite a primeira palavra: ");
	scanf("%s", p1);
	printf("Digite a segunda palavra: ");
	scanf("%s", p2);
	
	
	while(p1[i] != '\0' && p2[i] != '\0'){
		if(p1[i] != p2[i]){
			igual = 0;
			break;
		}
		i++;
	}
	
	if (p1[i] != '\0' || p2[i] != '\0') {
        igual = 0;
    }
	
	if(igual == 1){
		printf("As palavras sao iguais!!\n");
	} else {
		printf("As palavras NAOOO sao iguais!!\n");
	}
	
	return 0;
}