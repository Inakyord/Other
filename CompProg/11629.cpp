#include <cstdio>
#include <iostream>
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

	int p, g, respuesta;
	float suma;
	float perc;
	string nombre;
	string simbolo;
	string sumar="+", menor="<", mayor=">", menorIgual="<=", mayorIgual=">=", igual="=";
	map<string, float>mp;
	int i=0;
	bool correcto=0;

	scanf("%d %d\n", &p, &g);
	
	while(p--){
		getline(cin, nombre, ' ');
		scanf("%f\n", &perc);
		mp.insert(pair<string, float>(nombre, perc));
	}

	// for(map<string, float>::iterator it=mp.begin(); it!=mp.end(); it++)
	// 	printf("%s %f\n", ((*it).first).c_str(), (*it).second);

	while(g--){
		
		i++;
		suma=0;
		getline(cin,nombre, ' ');
		suma+=mp[nombre];

		while(true){
			getline(cin, simbolo, ' ');
			if(!simbolo.compare(sumar)){
				getline(cin,nombre, ' ');
				suma+=mp[nombre];
			}else{
				break;
			}
		}

		scanf("%d\n", &respuesta);

		correcto=0;
		if(!simbolo.compare(mayor)){
			// printf("%f > %d\n", suma, respuesta);
			if(suma>respuesta)
				correcto=1;
		}else if(!simbolo.compare(menor)){
			// printf("%f < %d\n", suma, respuesta);
			if(suma<respuesta)
				correcto=1;
		}else if(!simbolo.compare(mayorIgual)){
			// printf("%f >= %d\n", suma, respuesta);
			if(suma>=respuesta)
				correcto=1;
		}else if(!simbolo.compare(menorIgual)){
			// printf("%f <= %d\n", suma, respuesta);
			if(suma<=respuesta)
				correcto=1;
		}else if(!simbolo.compare(igual)){
			// printf("%f = %d\n", suma, respuesta);
			if(suma==respuesta)
				correcto=1;
		}

		if(correcto){
			printf("Guess #%d was correct.\n", i);
		}else{
			printf("Guess #%d was incorrect.\n", i);
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