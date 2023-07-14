#include <stdio.h>

int main(){
	
	int n; 
	long int aux, next;
	long long int moves;

	scanf("%d", &n);

	scanf("%ld", &aux);

	moves=0;

	for(int i=1; i<n; i++){
		scanf("%ld", &next);
		if(next>=aux){
			aux=next;
		}else{
			moves+=(aux-next);
		}
	}

	printf("%lld", moves);

	return 0;
}