#include <stdio.h>

int main(){

	long long n, res=1;

	scanf("%ld", &n);

	for(int i=0; i<n; i++){
		res*=2;
		if(res>1000000007)
			res-=1000000007;
	}

	printf("%ld", res);


	return 0;
}