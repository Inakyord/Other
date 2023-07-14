#include <stdio.h>

int main(){
	
	int n, aux;

	scanf("%d", &n);

	aux=n;

	if(n==1)
		printf("1");
	else if(n==2 || n==3){
		printf("NO SOLUTION");
	}else{

		if(n%2!=0)
			n--;
		else
			aux--;

		for(int i=2; i<=n; i+=2){
			printf("%d ", i);
		}
		for(int i=1; i<=aux; i+=2){
			printf("%d ", i);
		}
	}

	return 0;
}