#include<stdio.h>

int main(){

	int t; 
	long long x, y;
	long long res;

	scanf("%d", &t);

	for(int i=0; i<t; i++){
		scanf("%lld", &y);
		scanf("%lld", &x);

		if(x>y){
			
			if(x%2==0){
				res=(x-1)*(x-1)+1;
				res+=(y-1);
			}else{
				res=x*x;
				res-=(y-1);
			}

		}else{

			if(y%2==0){
				res=y*y;
				res-=(x-1);
			}else{
				res=(y-1)*(y-1)+1;
				res+=(x-1);
			}

		}

		printf("%lld\n", res);

	}

	return 0;
}