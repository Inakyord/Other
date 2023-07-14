//Template muy sencillo para problemas directos

#include <stdio.h>
#include <math.h>

int main() {
	
	int N;
	int res;

	scanf("%d", &N);

	res=sqrt(pow(4,N));
	res+=1;
	res*=res;


	printf("%d", res);

	return 0;
}