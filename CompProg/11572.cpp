//Template completo, todas las bibliotecas y I/O archivos

#include <cstdio>
#include <string>
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
	int t, n, num;
	map<int,int> con;

	scanf("%d", &t);

	while(t--){
		con.clear();

		scanf("%d", &n);
		
		while(n--){
			scanf("%d", &num);
			if(con.find(num)==con.end()){
				con.insert(pair<int,int>(num,1));
			}else{
				con[num]++;
			}
		}

		printf("%lld\n", con.size());
	
	}

}


int main() {

	// I/O archivos
	//if (getenv("LOCAL")) { setIO(); }
	//setIO();
	solve();
	
	return 0;
}