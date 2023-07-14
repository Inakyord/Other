#include <bits/stdc++.h>
using namespace std;

bool orden_x(pair<int, int> a, pair<int, int> b) {

	if(a.first != b.first) {
		return a.first < b.first;
	} else {
		return a.second < b.second;
	}

}


int main() {
	
	int T, N;
	int x,y, x_new, y_new;
	int max;
	pair<int, int> aux;
	vector<pair<int, int>> coords;
	float distancia;
	float resultado;

	scanf("%d", &T);

	while(T--) {

		coords.clear();
		max=0;
		resultado=0;
		scanf("%d", &N);

		for(int i=0; i<N; i++) {
			scanf("%d %d", &x, &y);
			aux.first=x;
			aux.second=y;
			coords.push_back(aux);
		}

		sort(coords.begin(), coords.end(), orden_x);
		//for (vector<pair<int, int>>::iterator it = coords.begin(); it != coords.end(); it++)
   		//	printf("%d %d\n", (*it).first, (*it).second);

   		x=coords.back().first;
		y=coords.back().second;
		coords.pop_back();
		
		for(int i=1; i<N; i++){
			//printf("%d %d\n", coords.back().first, coords.back().second);
			x_new=coords.back().first;
			y_new=coords.back().second;
			coords.pop_back();
			
			if(max<y_new) {
				distancia=sqrt(pow(x_new-x,2)+pow(y_new-y,2));
				//printf("distancia %d: %f\n", i, distancia);
				distancia*=(float)(y_new-max)/(y_new-y);
				//printf("distancia %d: %f\n", i, distancia);
				resultado+=distancia;
				max=y_new;
			}
			x=x_new;
			y=y_new;
		}
		printf("%4.2f\n", resultado);

	}



	return 0;
}