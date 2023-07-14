//Template muy sencillo para problemas directos

#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

int main() {
	
	int n, m;
	string s;
	string regla;
	char letra;
	char letra2;

	scanf("%d %d", &n, &m);

	for(int i=0; i<n; i++) {
		scanf("%c -> %c", &letra, &letra2);
		printf("%c %c", letra, letra2);
	}

	scanf("%c", &letra2);

	printf("\n\n%c -> %s\n", letra, regla);
	printf("%s\n", s);


	return 0;
}