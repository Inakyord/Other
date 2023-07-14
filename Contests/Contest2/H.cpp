//Template muy sencillo para problemas directos

#include <cstdio>
#include <math.h>
#include <map>
#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void setIO() {
    string file = __FILE__;
    file = string(file.begin(), file.end()-3);
    string input_file = file + "in";
    string output_file = file + "out";
    freopen(input_file.c_str(), "r", stdin);
    freopen(output_file.c_str(), "w", stdout);
}


// ---------------------------------------------------------------
// Here begins our solution
// ---------------------------------------------------------------

struct node{
	int valor;
	struct node *izq;
	struct node *der;
};

void solve() {
	
	int n, aux, h;
	int C=0;
	scanf("%d", &n);
	int *arreglo;

	scanf("%d", &aux);
	n--;

	node array[n+1];

	array[0].valor=aux;
	array[0].izq=NULL;
	array[0].der=NULL;

	node *actual = &array[0];
	node *algo;

	printf("%d\n", C);

	int i=1;
	while(n--){
		scanf("%d", &aux);

		algo = &array[i];
		algo->valor=aux;
		algo->izq=NULL;
		algo->der=NULL;

		//printf("Actual: %d\n", actual->valor);
		actual=&array[0];
		//printf("Actual: %d\n", actual->valor);

		h=0;
		while(true){

			h++;
			//printf("%d %d\n", actual->valor, algo->valor);
			if(actual->valor>algo->valor){
				//printf("hijo izq: %d\n", (actual->izq == NULL));
				if(actual->izq==NULL){
					actual->izq = algo;
					break;
				}else{
					actual = actual->izq;
				}
			}else{
				//printf("hijo der: %d\n", (actual->der == NULL));
				if(actual->der==NULL){
					actual->der = algo;
					break;
				}else{
					//printf("actual: %d actual der: %d\n", actual->valor, actual->der->valor);
					actual = actual->der;
				}
			}
		
		}

		C+=h;
		printf("%d\n", C);
		i++;

	}

}


int main() {

	// I/O archivos
	if (getenv("LOCAL")) { setIO(); }
	setIO();
	solve();
	
	return 0;
}