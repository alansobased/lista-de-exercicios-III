#include <stdio.h>

int main(){
	int m[5][5];

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(i == 2 || j == 2){
				m[i][j] = 1;
			} else {
				m[i][j] = 0;
			}
		}
	}


	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", m[i][j]);

			if(j==4) printf("\n");
		}
	}

	printf("\n");
	return 0;
}
