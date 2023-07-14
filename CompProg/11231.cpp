#include <stdio.h>

long long resolver(int, int);

long long resolver(int n, int m) {

	long long resultado = 0;
	int altura, ancho;

	altura = ((n-8)/2)+1; 	//n
	ancho = ((m-8)/2)+1;	//m
	resultado = altura*ancho;

	return resultado;
}


int main() {

	int n,m,c;
	long long res;

while(scanf("%d %d %d", &n, &m, &c), n>0) {
		
		res=0;
		if(c) { //white
			
			res=resolver(n,m);
			if(n>8 && m>8) {
				res+=resolver(n-1, m-1);
			}

		} else { //black
			if(m>8) {
				res=resolver(n,m-1);
				if(n>8 && (m-1)>8) {
					res+=resolver(n-1, m-2);
				}
			}
			if(n>8) {
				res+=((n-9)/2)+1; 	//n
			}
		}

		printf("%lld\n", res);
	}


	return 0;
}