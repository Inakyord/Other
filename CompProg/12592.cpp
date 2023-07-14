#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main() {
	int N, Q;
  string linea, respuesta;
  
  map<string,string>mp;
  scanf("%d\n", &N); //¿Esto serviría para leer de una el salto?
  
  while(N--){ //N seria el par, entonces leríamos 2*N, exacto. :), no podría ser solo N y leemos 2 líneas en cada vuelta?
		//scanf("%s", linea);
    //scanf("%s", respuesta);
    getline(cin,linea,'\n'); // El tercer parametro indica hasta donde parar
    getline(cin,respuesta,'\n'); 
    mp.insert(pair<string,string>(linea,respuesta));
    //mp[linea] = respuesta;
  }
  
  scanf("%d\n", &Q);
  
  while(Q--){
    getline(cin,linea,'\n');
 
    printf("%s\n", mp[linea].c_str()); //Te da el valor
  }

	return 0;
}