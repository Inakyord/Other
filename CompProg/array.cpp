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
	
	int n, m, num;
	vector<int> datos;

	scanf("%d %d", &n, &m);
	
	int arreglo[n];

	for(int i=0; i<n; i++){
		scanf("%d", &num);
		datos.push_back(datos);
	}

	for(int i=0; i<n; i++){
		arreglo[i]=0;
	}


	for(int i=0; i<n; i++){
		if(datos[i]!=0){

		}
	}


}


int main() {

	// I/O archivos
	if (getenv("LOCAL")) { setIO(); }
	
	solve();
	
	return 0;
}