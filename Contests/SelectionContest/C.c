#include <stdio.h>
#include <stdlib.h>

int main(void){

	int T;
	int n;
	int i;
	int j;
	int votes;
	int total;
	int winner;
	int v_w;
	int tie=0;
	int *res;

	scanf("%d", &T);
	res=malloc(T*2*sizeof(int));

	for(i=0; i<T; i++){
		
		scanf("%d", &n);
		total=0;
		v_w=0;
		winner=0;
		tie=0;
		for(j=0; j<n; j++){
			scanf("%d", &votes);
			total+=votes;
			if(votes==v_w){
				tie=1;
			}else if(votes>v_w){
				winner=j+1;
				v_w=votes;
				tie=0;
			}
		}
		if(tie==1){
			res[2*i]=0;
		}else if(v_w>(total*0.5)){
			res[2*i]=1;
		}else{
			res[2*i]=2;
		}
		res[2*i+1]=winner;
	}

	for(i=0; i<T; i++){
		if(i>0)
			printf("\n");
		if(res[2*i]==0){
			printf("no winner");
		}else if(res[2*i]==1){
			printf("majority winner %d", res[2*i+1]);
		}else{
			printf("minority winner %d", res[2*i+1]);
		}
	}

	free(res);
	return 0;
}