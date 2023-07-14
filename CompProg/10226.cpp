//Template completo, todas las bibliotecas y I/O archivos

#include <cstdio>
#include <iostream>
#include <string>
#include <map>

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
	
	int n;
	map<string,int> mp;
	string linea;
	int total;

	scanf("%d\n\n", &n);

	while(n--){
		total=0;
		while(getline(cin,linea) && !linea.empty()){
			if(mp.find(linea) == mp.end()){
				mp.insert(pair<string, int>(linea,1));
			}else{
				mp[linea]++;
			}
			total++;
		}

		for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++)
			printf("%s %.4f\n", (*it).first.c_str(), (((float)(*it).second)*100/total));
		if(n){
			printf("\n");
			mp.clear();
		}

	}



}


int main() {

	// I/O archivos
	//if (getenv("LOCAL")) { setIO(); }
	//setIO();
	solve();
	
	return 0;
}