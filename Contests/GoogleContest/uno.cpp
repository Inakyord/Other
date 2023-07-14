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
	
	vector<int> ans;
	multiset<int> mp;
	int T;
	int N;
	int aux;
	int i=1;
	int mitad;
	int s;
	bool flag;
	int cuenta;

	scanf("%d", &T);

	while(T--){

		scanf("%d", &N);

		while(N--){

			scanf("%d", &aux);
			mp.insert(aux);
		}

		s=mp.size();
		mitad=s/2;
		flag=0;
		printf("Caso #%d: ", i);


		for(int j=0; j<mitad; j++){

			aux = 0;
			for(multiset<int>::iterator it=mp.begin() ; it != mp.end() ; it++){
				if(aux<(*it)){
					aux=(*it);
				}
			}

			if(aux%2!=0){
				flag=1;
				j=s;
			}else{
				cuenta = mp.count(aux);
				mp.erase(aux);
				for(int l=1; l<cuenta; l++)
					mp.insert(aux);
				cuenta = mp.count(aux/2);
				if(cuenta==0){
					flag=1;
					j=s;
				}else{
					mp.erase(aux/2);
					for(int l=1; l<cuenta; l++)
						mp.insert(aux/2);
					ans.push_back(aux/2);
				}
			}	

		}



		if(!flag){
			for(int j=0; j<mitad; j++){
				printf("%d ", ans[mitad-j-1]);
			}
		}else{
			printf("[]");
		}
		
		printf("\n");
		i++;

		mp.clear();
		ans.clear();

	}
	

}


int main() {

	setIO();
	
	solve();
	
	return 0;
}