//Template completo, todas las bibliotecas y I/O archivos

#include <bits/stdc++.h>
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


void solve() {
	
	int P, N1, N5, N10, N25;
	int contador, suma;
	bool imposible=0;

	scanf("%d", &P);
	scanf("%d %d %d %d", &N1, &N5, &N10, &N25);

	suma=P;
	contador=0;

	while(suma%5!=0 && !imposible){ // checa si se puede volver la cantidad a pagar
		if(N1){						// un multiplo de 5, porque si no es imposible.
			suma--;
			N1--;
			contador++;
		}else{
			imposible=1;
		}
	}

	if(suma>N1+N5*5+N10*10+N25*25){
		imposible=1;
	}

	while(!imposible && suma!=0){

		if(suma>N1+N5*5+N10*10+N25*25){ // checa si la suma no es mayor a nuestro dinero
			imposible=1;
		}else if(suma <= N1){ // checa si el pago se puede hacer con 1's
			contador+=suma; 	// se paga con 1's
			suma=0;
		}else if(suma<=N1+N5*5){ // checa si el pago se puede hacer con 5's y 1's
			suma-=5;			// se paga una de 5 y se vuelve a checar
			N5--;
			contador++;
		}else if(suma<=N1+N5*5+N10*10){ // checa si el pago se puede hacer con 10's, 5's y 1's
			suma-=10;			// se paga una de 10 y se vuelve a checar
			N10--;
			contador++;
		}else{ 				// si no, se debe poder hacer con 25.
			suma-=25;			// se paga una de 25 y se vuelve a checar
			N25--;
			contador++;
		}

	}


	if(imposible){
		printf("Impossible");
	}else{
		printf("%d", contador);
	}

}


int main() {

	// I/O archivos
	setIO();
	
	solve();
	
	return 0;
}