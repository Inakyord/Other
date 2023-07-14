#include <stdio.h>

int main() {

	float height, distance, slides, fatigue, snail;
	int days, resultado;

	while (scanf("%f %f %f %f", &height, &distance, &slides, &fatigue), height) {
		days=0;
		resultado=0;
		snail=0;
		fatigue=distance*(fatigue/100);

		while (!resultado) {

			days++;
			if (distance-fatigue*(days-1)<0) {
				distance = 0;
			}else{
				snail+=distance-fatigue*(days-1);
			}

			if (snail>height) {
				resultado=1;
			}else{

				snail-=slides;
				if (snail<0) {
					resultado=2;
				}

			}

		}

		if (resultado==1) {
			printf("success on day %d\n", days);
		}else {
			printf("failure on day %d\n", days);
		}

	}

	return 0;
}