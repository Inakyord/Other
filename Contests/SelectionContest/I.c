#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int T=0;
	int n;
	int *elem, *dif;
	int res[10];
	int i,j;
	int leer=1;
	char c;

		scanf("%d", &n);
	while(T<10 && leer){
		
		elem=malloc(n*sizeof(int));
		dif=malloc((n-1)*sizeof(int));

		scanf("%d", &elem[0]);
		for(i=1; i<n; i++){
			scanf("%d", &elem[i]);
			dif[i-1]=abs(elem[i]-elem[i-1]);
		}

		for(i=0; i<(n-1); i++){
			res[T]=0;
			for(j=0; j<(n-1); j++){
				if(dif[j]==(i+1))
					res[T]=1;
			}
			if(res[T]==0){
				i=n-1;
			}
		}

		free(elem);
		free(dif);
		T++;
		if(!scanf("%d", &n) || scanf("%c", &c)){
			leer=0;
		}
	}

	if(res[0]==0)
		printf("Not jolly");
	else
		printf("Jolly");
	for(i=1; i<=T; i++){
		if(res[i]==0)
			printf("\nNot jolly");
		else if(res[i]==1)
			printf("\nJolly");
	}

	return 0;
}