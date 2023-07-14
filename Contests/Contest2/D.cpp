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

	string linea;
	map<string,int>mp;
	int num=0;
	int max=0;
  
  	while(getline(cin, linea,'\n'), strcmp(linea,"***")){ //N seria el par, entonces leríamos 2*N, exacto. :), no podría ser solo N y leemos 2 líneas en cada vuelta?
  		if(mp.find(linea)==mp.end()){
  			mp.insert(pair<string, int>(linea,0));
  		}else{
  			mp[linea]+=1;
  		}
  	}

  	



}


int main() {

	// I/O archivos
	if (getenv("LOCAL")) { setIO(); }
	//setIO();
	solve();
	
	return 0;
}