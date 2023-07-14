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
	
	int T;
	string linea;
	int aux;
	char car;
	int digito;
	int abiertos;
	int dif;
	int conta=1;

	scanf("%d\n", &T);

	while(T--){

		getline(cin, linea);
		aux = linea.size();
		abiertos = 0;

		printf("Caso #%d: ", conta);

		for(int i=0; i<aux; i++){
			car = linea[i];
			digito = (int)car - 48;

			dif = digito-abiertos;

			// hay que cerrar
			if(dif<0){
				dif*=-1;
				for(int j=0; j<dif; j++){
					printf(")");
					abiertos--;
				}
			}else if(dif>0){ // hay que abrir
				for(int j=0; j<dif; j++){
					printf("(");
					abiertos++;
				}
			}
			printf("%d", digito);


		}

		for(int i=0; i<abiertos; i++){
			printf(")");
		}
		printf("\n");
		conta++;
	}

}


int main() {

	setIO();
	
	solve();
	
	return 0;
}