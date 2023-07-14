//Template muy sencillo para problemas directos

#include <stdio.h>
#include <math.h>

#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))

int main() {
	
	int K;
	long long aux;
	int rompe=0;
	int total;
	int sobrante;

	scanf("%d", &K);

	aux=nearestPowerOfTwo(K);
	if(aux<K){
		aux*=2;
	}
	
	sobrante=aux-K;


	if(K==aux){
		rompe=0;
	} else {
		total=0;
		sobrante=aux;
		while(total<K) {
			rompe++;
			if(total+(sobrante/2)<=K){
				total+=(sobrante/2);
			}
			sobrante/=2;
		}

	}
	

	printf("%lld %d", aux, rompe);

	return 0;
}