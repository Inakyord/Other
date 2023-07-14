#include <stdio.h>
#include <stdlib.h>

int main(void){

	int X, Y, N;
	int i;

	scanf("%d %d %d", &X, &Y, &N);

	if(X==1){
		printf("Fizz");
		if(Y==1){
			printf("Buzz");
		}
	}else if(Y==1){
		printf("Buzz");
	}else{
		printf("1");
	}

	for(i=2; i<=N; i++){
		
		printf("\n");
		if(i%X==0){
			printf("Fizz");
			if(i%Y==0){
				printf("Buzz");
			}
		}else if(i%Y==0){
			printf("Buzz");
		}else{
			printf("%d", i);
		}

	}

	return 0;
}