#include <stdio.h>
#include <stdlib.h>

int main(void){

	int A;
	int Ainv;
	int B;
	int Binv;
	int d, u;
	
	scanf("%d %d", &A, &B);

	u = A%10;
	A-=u;
	d = A%100;
	A-=d;
	Ainv=u*100+d+(A/100);

	u = B%10;
	B-=u;
	d = B%100;
	B-=d;
	Binv=u*100+d+(B/100);

	if (Ainv>Binv)
		printf("%d", Ainv);
	else
		printf("%d", Binv);

	return 0;
}