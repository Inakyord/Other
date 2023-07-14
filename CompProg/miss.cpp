#include <stdio.h>
 
int main(){
 
	long long n, aux, res, suma;
 
	scanf("%lld", &n);
 
	suma=n*(1+n)/2;
	res=0;
 
	for(int i=0; i<n-1; i++){
		scanf("%lld", &aux);
		res+=aux;
	}
 
	res=suma-res;
 
	printf("%lld", res);
 
	return 0;
}