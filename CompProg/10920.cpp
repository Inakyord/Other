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


void solve() {
	int sz; int P;
	int level;
	
	while(scanf("%d %d", &sz, &P), sz>0) {

		level = (int)ceil(sqrt(P))-1;
		cout << level << endl;

		//int esd = level*level;
		//int esi = level*level - 3k;
		

	}
}


int main() {

	solve();
	return 0;
}