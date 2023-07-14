#include <stdio.h>
#include <stdlib.h>

int main(void){

	int N;
	int *H;
	int res=0;
	int i;
	int j;
	int aux=0;
	int pop=0;

	scanf("%d", &N);
	H=malloc(N*sizeof(int));

	for(i=0; i<N; i++){
		scanf("%d", &H[i]);
	}

	for(i=0; i<N; i++){
		if(pop!=N && H[i]!=-1){
			aux=H[i];
			H[i]=-1;
			pop++;
			for(j=i+1; j<N; j++){
				if(H[j]==aux-1){
					aux=H[j];
					H[j]=-1;
					pop++;
				}
			}
		res++;
		}else if(pop==N){
			i=N;
		}
	}

	if(res==0)
		printf("%d", N);
	else
		printf("%d", res);


	free(H);
	return 0;

}