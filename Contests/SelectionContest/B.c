#include <stdio.h>
#include <stdlib.h>

int main(void){

	int N;
	int *H;
	int res=0;
	int salir=0;
	int i;
	int j;
	int aux=0;

	scanf("%d", &N);
	H=malloc(N*sizeof(int));

	for(i=0; i<N; i++){
		scanf("%d", &H[i]);
	}

	for(i=0; i<N; i++){
		salir=1;

		for(j=i; j<N; j++){

			if(H[j]!=0){
				salir=0;
				if(aux==0){
					aux=H[j];
					H[j]=0;
				}else if(H[j]==(aux-1)){
					aux=H[j];
					H[j]=0;
				}
			}
		}

		if(aux==0)
			res--;
		aux=0;
		res++;
		if(salir==1 || i==(N-1)){
			printf("%d", res);
			free(H);
			return 0;
		}

	}

}