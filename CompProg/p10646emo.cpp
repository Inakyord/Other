#include <stdio.h>

int main(){

	int N;
	int aux, j;
	int cuenta;

	scanf("%d", &N);
	j=0;
	while(N!=0){
		j++;
		cuenta=0;
		for(int i=0; i<N; i++){
			scanf("%d", &aux);
			if(aux==0){
				cuenta--;
			}else{
				cuenta++;
			}
		}
		printf("Case %d: %d\n", j, cuenta);
		scanf("%d", &N);
	}


	return 0;
}


//Submission received with ID 26767421