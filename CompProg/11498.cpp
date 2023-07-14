#include <stdio.h>

int main() {

	int K, N, M, X, Y;


	while (scanf("%d", &K), K) {

		scanf("%d %d", &N, &M);
		
		while (K--) {
			scanf("%d %d", &X, &Y);

			if (X==N || X==M || Y==N || Y==M){
				printf("divisa\n");
			}else if (X>N && Y>M) {
				printf("NE\n");
			}else if (X>N && Y<M) {
				printf("SE\n");
			}else if (X<N && Y>M) {
				printf("NO\n");
			}else {
				printf("SO\n");
			}

		}
	}


	return 0;
}