// Input / Output basics

// Problem: output the sum of numbers on each case:

//Case 1: n input cases
#include <stdio.h>
int main() {
	int TC, a, b;
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}


//Case 2: Stop until 0 0
#include <stdio.h>
int main() {
	int a, b;
	while (scanf("%d %d", &a, &b), (a || b)) {
		printf("%d\n", a + b);
	}
}


//Case 3: Stop until EOF
#include <stdio.h>
int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
}


//Case 4: Each case indicates the number of elements to sum
#include <stdio.h>
int main() {
	int k;
	while (scanf("%d", &k) != EOF) {
		int v, ans = 0;
		while (k--) {
			scanf("%d", &v);
			ans += v;
		}
		printf("%d\n", ans);
	}
}