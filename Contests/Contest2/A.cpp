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


void solve() {
	
	vector<int> tiempos;

	int n, k, t;
	int res=1;
	int inicio;
	int pet=1;

	scanf("%d %d", &n, &k);

	scanf("%d", &t);
	n--;
	inicio=t;

	while(n--){

		scanf("%d", &t);

		if(t<(inicio+1000)){
			pet++;
		}else{
			inicio=t;
			if(pet>res){
				res=pet;
			}
			pet=1;
		}

	}

	if(pet>res){
		res=pet;
	}

	res = ceil((double)res/(double)k);
	printf("%d", res);

}


int main() {

	// I/O archivos
	if (getenv("LOCAL")) { setIO(); }
	//setIO();
	solve();
	
	return 0;
}