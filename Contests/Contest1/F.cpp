//Template muy sencillo para problemas directos

#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

struct platform{
	int altura;
	int inicio;
	int final;
};



bool compa(platform a, platform b) {
  if (a.altura != b.altura)
    return a.altura < b.altura;
  else
    return a.inicio < b.inicio; 
}

int main() {
	
	int N, Y, X1, X2;
	platform aux;
	vector<platform> v;
	long long resultado=0;
	bool izq, der;
	int izquierdo, derecho;
	vector<platform>::iterator esp;

	scanf("%d", &N);
	
	for(int i=0; i<N; i++) {
		scanf("%d %d %d", &Y, &X1, &X2);
		aux.altura=Y;
		aux.inicio=X1;
		aux.final=X2-1;
		v.push_back(aux);
	}
	sort(v.begin(), v.end(), compa);
	int pil=0;
	for(vector<platform>::iterator j = v.begin(); j != v.end(); j++){
		pil++;
		izq=0;
		der=0;
		
		for(int i=1; i<pil; i++) {
			//printf("FFOR %d %d\n", pil, i);
			aux=v.at(pil-i-1);
			//printf("\n\n%d\n\n", aux.altura);
			if(!izq && aux.inicio<=(*j).inicio && aux.final>=(*j).inicio) {
				izquierdo=(*j).altura-aux.altura;
				izq=1;
				//printf("ENTROOOOizq\n");
			}
			if(!der && aux.inicio<=(*j).final && aux.final>=(*j).final) {
				//printf("%d == %d, %d == %d\n", aux.inicio, (*j).final, aux.final, (*j).final);
				derecho=(*j).altura-aux.altura;
				der=1;
				//printf("ENTROOOOder\n");
			}
		}

		if(!izq){
			resultado+=(*j).altura;
			//printf("%d  %lld\n", pil, resultado);
		}else{
			resultado+=izquierdo;
			//printf("esp %d  %lld\n", pil, resultado);
		}
		if(!der){
			resultado+=(*j).altura;
			//printf("%d  %lld\n", pil, resultado);
		}else{
			resultado+=derecho;
			//printf("esp %d  %lld\n", pil, resultado);
		}

		//printf("%d tot: %lld\n", pil, resultado);
	}


	printf("%lld", resultado);

	return 0;
}