#include <cstdio>


void simplificar(int *denom, int *num);

void simplificar(int *denom, int *num){
	int primos[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};  //15
	
	for(int i=0; i<15; i++){
		if(*denom%primos[i]==0 && *num%primos[i]==0){
			*denom/=primos[i];
			*num/=primos[i];
			i=0;
		}
	}

}

int main() {
	
	int n, avg, sum, num;
	int i=1, cifras_entero, cifras_num, cifras_denom;
	bool neg=0;

	while(scanf("%d", &n), n!=0) {
		sum=0;
		avg=0;
		neg=0;
		cifras_entero=0;
		cifras_denom=1;
		cifras_num=1;
		for(int i=0; i<n; i++){
			scanf("%d", &num);
			sum+=num;
			if(sum>=n || sum<=-n){
				avg+=sum/n;
				sum=sum%n;
			}
			//printf("\n\n avg=%d  sum=%d\n\n", avg, sum);
		}

		simplificar(&sum, &n);

		printf("Case %d:\n", i);

		if(avg<0){
			neg=1;
			avg*=-1;
		}
		if(sum<0){
			neg=1;
			sum*=-1;
		}

		if(avg>999)
			cifras_entero=4;
		else if(avg>99)
			cifras_entero=3;
		else if(avg>9)
			cifras_entero=2;
		else if(avg>0)
			cifras_entero=1;

		if(n==100)
			cifras_denom=3;
		else if(n>9)
			cifras_denom=2;

		if(sum>9)
			cifras_num=2;

		if(sum!=0){
			printf("\n\n cifras_entero=%d  cifras_denom=%d  cifras_num=%d\n\n", cifras_entero, cifras_denom, cifras_num);
			for(int i=0; i<cifras_entero; i++){
				printf(" ");
			}
			for(int i=0; i<(cifras_denom-cifras_num); i++){
				printf(" ");
			}
			if(neg)
				printf("  ");
			printf("%d\n", sum);

			if(neg){
				printf("- ");
			}
			if(avg!=0)
				printf("%d", avg);
			for(int i=0; i<cifras_denom; i++){
				printf("-");
			}
			printf("\n");

			for(int i=0; i<cifras_entero; i++){
				printf(" ");
			}
			if(neg)
				printf("  ");
			printf("%d\n", n);



		}else{
			if(neg)
				printf("- %d\n", avg);
			else
				printf("%d\n", avg);
		}

		i++;
	}

	return 0;
}

