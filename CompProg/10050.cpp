#include <stdio.h>
#include <vector>
using namespace std;

int main() {

	int T, N, P, aux, res;
	vector<int> hart;
	vector<bool> days;

	scanf("%d", &T);

	while(T--) {
		days.clear();
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			days.push_back(0);
		}
		scanf("%d", &P);
		
		while(P--) {
			scanf("%d", &aux);
			for(int i=-1+aux; i<N; i+=aux) {
				days.at(i)=1;
			}
		}
		for(int i=5; i<N; i++){
			days.at(i)=0;
			if(i%7==6)
				i+=5;
		}
		
		res=0;
		for(int i=0; i<N; i++){
			aux=days[i];
			res+=days[i];
		}

		printf("%d\n", res);
	}

	return 0;
}