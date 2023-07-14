#include <stdio.h>

int main(){
	
	long long n,suma;

	scanf("%lld", &n);

	if(n%4==0){
		printf("YES\n");

		printf("%lld\n", n/2);
		for(int i=1; i<n+1; i++){
			if(i%4==0 || i%4==1)
				printf("%d ", i);
		}

		printf("\n%lld\n", n/2);
		for(int i=1; i<n+1; i++){
			if(i%4==2 || i%4==3)
				printf("%d ", i);
		}

	}else if(n%4==3){
		printf("YES\n");
		
		printf("%lld\n", (n+1)/2);
		for(int i=1; i<n+1; i++){
			if(i%8==1 || i%8==2 || i%8==4 || i%8==7)
				printf("%d ", i);
		}

		printf("\n%lld\n", (n-1)/2);
		for(int i=1; i<n+1; i++){
			if(i%8==0 || i%8==3 || i%8==5 || i%8==6)
				printf("%d ", i);
		}

	}else{
		printf("NO");
	}




}