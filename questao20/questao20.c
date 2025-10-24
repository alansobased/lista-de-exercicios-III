#include <stdio.h>

int main(){
	char p[100];
	int palindromo=1;
	int i=0, j=0;
	
	printf("Digite sua palavra: ");
	scanf("%s", p);
	
	while(p[i] != '\0'){
		j++;
		i++;
	}
	
	j--;
	i=0;
	
	while(i!=j){
		if(p[i] != p[j]){
			palindromo = 0;
			break;
		}
		i++;
		j--;
	}
	
	if(palindromo == 1){
		printf("Sua palavra eh um palindromo!!!\n");
	} else{
		printf("Sua palavra NAOOO eh um palindromo.\n");
	}
		
	
	
	return 0;
}