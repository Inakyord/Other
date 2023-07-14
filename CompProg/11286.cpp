//Template completo, todas las bibliotecas y I/O archivos

#include <cstdio>
#include <set>
#include <map>

using namespace std;

// void setIO() {
//     string file = __FILE__;
//     file = string(file.begin(), file.end()-3);
//     string input_file = file + "in";
//     string output_file = file + "out";
//     freopen(input_file.c_str(), "r", stdin);
//     freopen(output_file.c_str(), "w", stdout);
// }


// ---------------------------------------------------------------
// Here begins our solution
// ---------------------------------------------------------------


void solve() {
	int n, num1, num2, num3, num4, num5;
	set<int> aux;
	map<set<int>, int> mp;
	int res;
	int max;

	while(scanf("%d", &n), n){
		res=0;
		max=0;
		aux.clear();
		mp.clear();

		while(n--){
			scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
			aux.insert(num1);
			aux.insert(num2);
			aux.insert(num3);
			aux.insert(num4);
			aux.insert(num5);
			if(mp.find(aux)==mp.end()){
				mp.insert(pair<set<int>, int>(aux,1));
			}else{
				mp[aux]++;
			}
		}

		for(map<set<int>, int>::iterator it=mp.begin(); it!=mp.end(); it++){

			if((*it).second > max){
				max=(*it).second;
			}

		}

		for(map<set<int>, int>::iterator it=mp.begin(); it!=mp.end(); it++){

			if((*it).second==max){
				res++;
			}

		}

		printf("%d\n", res*max);

	}

}


int main() {

	// I/O archivos
	//if (getenv("LOCAL")) { setIO(); }
	//setIO();
	solve();
	
	return 0;
}