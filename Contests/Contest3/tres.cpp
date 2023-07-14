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
	
	int a, b;
	int gana; // 1-> Stan      0 -> Ollie
	bool sigue;
	int aux;
	while(scanf("%d %d", &a, &b), a!=0 || b!=0){
		sigue=1;
		gana = 0;
		aux=0;
		printf("%d %d\n", a, b);
		while(sigue){
			gana+=1;
			gana%=2;
			if(a%b==0 || b%a==0){
				sigue=0;
			}else{

				if(a<b){ // primero mayor
					aux=b/a;
					if(aux>1){
						if(b%2==0 && a%2==0){
							b-=(a*aux);
						}else if(b%2==0 && a%2==1){
							if(aux%2==0){
								aux--;
							}
							b-=(a*aux);
						}else if(b%2==1 && a%2==0){
							b-=(a*aux);
						}else if(b%2==1 && a%2==1){
							if(aux%2==1){
								aux--;
							}
							b-=(a*aux);
						}

					}else{
						b-=a;
					}

				}else{ // segundo mayor
					aux=a/b;
					if(aux>1){
						if(a%2==0 && b%2==0){
							a-=(b*aux);
						}else if(a%2==0 && b%2==1){
							if(aux%2==0){
								aux--;
							}
							a-=(b*aux);
						}else if(a%2==1 && b%2==0){
							a-=(b*aux);
						}else if(a%2==1 && b%2==1){
							if(aux%2==1){
								aux--;
							}
							a-=(b*aux);
						}
					}else{
						a-=b;
					}

				}
				printf("%d %d\n", a, b);
			}

		}

		if(gana){
			printf("Stan wins\n");
		}else{
			printf("Ollie wins\n");
		}

	}

}


int main() {

	// I/O archivos
	setIO();
	
	solve();
	
	return 0;
}