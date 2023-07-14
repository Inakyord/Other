#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int S, B, L, R, currL, currR;
	vector<int> soldiers;
	vector<int>:: iterator j;
	vector<int>:: iterator k;

	while(scanf("%d %d", &S, &B), S) {
		
		soldiers.clear();
		for(int i=1; i<=S; i++)
			soldiers.push_back(i);

		while(B--) {

			scanf("%d %d", &L, &R);
			
			j=lower_bound(soldiers.begin(), soldiers.end(), L);
			if(j==soldiers.begin()){
				printf("* ");
			}else{
				printf("%d ", *(j-1));
			}
			
			k=lower_bound(soldiers.begin(), soldiers.end(), R);
			if(k==soldiers.end()-1){
				printf("*\n");
			}else
				printf("%d\n", *(k+1));
			
			soldiers.erase(j, (k+1));

		}
		printf("-\n");
	}

	return 0;
}