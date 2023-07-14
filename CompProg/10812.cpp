#include <stdio.h>

int main() {

	long long T, sum, dif, x, y;

	scanf("%lld", &T);

	while(T--) {

		scanf("%lld %lld", &sum, &dif);

		if(dif>sum){
			printf("impossible\n");
		}else {
			y=(sum-dif)/2;
			x=sum-y;
			if((sum-dif)%2!=0) {
				printf("impossible\n");
			}else if(x>y){
				printf("%d %d\n", x, y);
			}else {
				printf("%d %d\n", y, x);
			}
		}

	}

	return 0;
}