#include <stdio.h>

int main(){

	int t, aux;
	long long a, b;

	scanf("%d", &t);

	for(int i=0; i<t; i++){
		scanf("%lld %lld", &a, &b);
		aux=1;
		while(aux){

			if((a==0||b==0)&&a!=b){
				printf("NO\n");
				aux=0;
			}else if(2*a==b || 2*b==a){
				printf("YES\n");
				aux=0;
			}else{
				if(a<b){
					a-=2;
					b--;
				}else{
					a--;
					b-=2;
				}
			}

		}
	}



	return 0;
}