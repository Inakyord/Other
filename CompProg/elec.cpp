#include<bits/stdc++.h>
using namespace std;


int main() {

  int T, M, N, votosM = 0, votosN = 0;
  int n, m;
  int aux, aux2;
  int cond;
  int i;
  bool flag;


  scanf("%d", &T);
  
  while(T--){
    votosN=0;
    votosM=0;
    
    scanf("%d %d",&N,&M);

    int *john;
    int *jack;

    john=(int*)malloc(N*sizeof(int));
    jack=(int*)malloc(M*sizeof(int));

    n=N;
    m=M;
    
    while(N--){
      scanf("%d", &john[N]);
      votosN+=john[N];
    }
    sort(john, john+n);
    
    while(M--){
      scanf("%d", &jack[M]);
      votosM+=jack[M];
    }
    sort(jack, jack+m);

    i=0;
    if(n>m){
      cond=m;
    }else{
      cond=n;
    }
    flag=0;

    if(votosN > votosM){
    		printf("0\n");
        flag=1;
    }
    
    while(cond-- && !flag){

    	aux=john[i];
      aux2=jack[m-i-1];
      
      if(aux2>aux){
        john[i]=aux2;
        jack[m-i-1];
        votosN+=aux2-aux;
        votosM-=aux2-aux;
      }else{
        printf("-1\n");
        flag=1;
      }
      i++;
      if(votosN > votosM){
    		printf("%d\n", i);
        flag=1;
      }
    }

    free(john);
    free(jack);

  }

  return 0;
}