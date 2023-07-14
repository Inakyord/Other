#include <stdio.h>
#include <stdlib.h>

int main(void){

	int T;
	int *res;
	int i, j;
	char salto;
	int Nc, Ne;
	int *C, *E;
	long totC, totE;
	double promC, promE;
	

	scanf("%d", &T);
	res=malloc(T*sizeof(int));
	
	for(i=0; i<T; i++){
		totC=0;
		totE=0;
		res[i]=0;
		
		scanf("%c", &salto);
		scanf("%d %d", &Nc, &Ne);
		C=malloc(Nc*sizeof(int));
		E=malloc(Ne*sizeof(int));

		for(j=0; j<Nc; j++){
			scanf("%d", &C[j]);
			totC+=C[j];
		}
		for(j=0; j<Ne; j++){
			scanf("%d", &E[j]);
			totE+=E[j];
		}

		promC = totC/(float)Nc;
		promE = totE/(float)Ne;
		
		//printf("\n Ciencias: %d, %d, %f", Nc, totC, promC);
		//printf("\n Ciencias: %d, %d, %f\n", Ne, totE, promE);

		for(j=0; j<Nc; j++){
			if(C[j]>promE && C[j]<promC)
				res[i]++;
		}

		free(C);
		free(E);

	}

	printf("%d", res[0]);
	for(i=1; i<T; i++)
		printf("\n%d", res[i]);

	free(res);
	return 0;
}