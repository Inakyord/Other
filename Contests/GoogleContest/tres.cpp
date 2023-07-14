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
	int N;
	int contador=1;
	int visibles;
	int num;
	int i, j;
	vector<int> v, v2;

	scanf("%d", &T);

	while(T--){

		printf("Caso #%d: ", contador);

		scanf("%d", &N);

		while(N--){
			scanf("%d", &num);
			v.push_back(num);
			v2.push_back(num);
		}

		s = v.size();
		sort(v2.begin(), v2.end());

		for (int i = 0; i<s-1; i++){

		}

		printf("\n");
		contador++;
	}
	
	

}


int main() {

	setIO();
	
	solve();
	
	return 0;
}