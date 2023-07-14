#include <stdio.h>
#include <stdlib.h>

int main(void){

	int n;
	int *r;
	int i;
	int aux;

	scanf("%d", &n);
	r=malloc((n-1)*sizeof(int));

	for(i=0; i<(n-1); i++){
		scanf("%d", &aux);
		r[aux]=i+2;
	}

	printf("1");
	for(i=0; i<(n-1); i++){
		printf(" %d", r[i]);
	}

	free(r);
	return 0;
}