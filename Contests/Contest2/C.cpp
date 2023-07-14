//Template muy sencillo para problemas directos

#include <cstdio>
#include <math.h>
#include <map>
#include <string>
#include <iostream>

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
	
	int n, p, m;
	string nombre;
	int num;
	int bandera;

	scanf("%d %d %d", &n, &p, &m);
	map<string, int> gente;

	while(n--){
		cin>>nombre;
		gente[nombre]=0;
	}

	while(m--){
		cin>>nombre>>num;
		gente[nombre]+=num;
		if(gente[nombre]>=p){
			cout<<nombre<<" wins!\n";
			bandera=1;
		}
	}

	if(!bandera)
		printf("No winner!");
}


int main() {

	// I/O archivos
	if (getenv("LOCAL")) { setIO(); }
	setIO();
	solve();
	
	return 0;
}
