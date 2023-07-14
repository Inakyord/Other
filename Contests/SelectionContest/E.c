#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int T;
	float R, B, M, interes;
	float anterior;
	int i;
	int j;
	int *res;

	scanf("%d", &T);
	res = malloc(T*sizeof(int));


	for(i=0; i<T; i++){
		scanf("%f %f %f", &R, &B, &M);
		j=0;
		while(B>0 && j<=1200){
			interes=round((floor((B*R/100)*1000)/10)+0.01)/100;
			anterior=B;
			B+=interes;
			B-=M;
			B = round(B*100)/100;
			if(B>=anterior){
				j=1200;
			}
			j++;
		}
		res[i]=j;
	}

	
	if(res[0]>1200)
		printf("impossible");
	else
		printf("%d", res[0]);
	for(i=1; i<T; i++){
		if(res[i]>1200)
			printf("\nimpossible");
		else
			printf("\n%d", res[i]);
	}

	free(res);
	return 0;
}