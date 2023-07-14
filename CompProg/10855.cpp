#include <bits/stdc++.h>
using namespace std;

#define endl				'\n'
#define FO(i, b)  			for(int i = 0; i < (b); i++)
#define FOR(i, a, b)		for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)  		for (int i = (a); i > (b); i--)
#define TR(v, arr)			for (auto& (v) : (arr))
#define pint(x)				printf("%d\n", x);
#define pll(x) 				printf("%lld\n", x);
#define si(x) 				scanf("%d", &x);
#define sl(x) 				scanf("%lld", &x);

typedef vector<int> vi;
typedef vector<long long> vll;

// ---------------------------------------------------------------
// Here begins our solution
// ---------------------------------------------------------------


int main() {
	int N, n;
	vector<vector<char>> grande, chico;
	vector<char> auxiliar;
	string s;
	char aux;

	while(scanf("%d %d", &N, &n), N>0) {

		for(int i=0; i<N; i++) {
			for(int j=0; j<N; j++) {
				scanf("%c", &aux);
				auxiliar.push_back(aux);
			}
			grande.push_back(auxiliar);
		}


		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				scanf("%c", &aux);
				auxiliar.push_back(aux);
			}
			chico.push_back(auxiliar);
		}

		for(int i=0; i<4; i++){

			for(int j=0; j<((N-n+1)*(N-n+1)); j++){
				//Análisis.
			}

		}


		printf("\n");
	}

	return 0;
}