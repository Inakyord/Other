#include <stdio.h>
#include <math.h>

int main() {
	
	int Xm, Ym, N;
	int X, Y, Xold, Yold;
	double m, b, mp, bp;
	double xnear, ynear, xres, yres;
	double resultado, distancia;
	
	while (scanf("%d", &Xm) != EOF) {
		scanf("%d", &Ym);
		scanf("%d", &N);
		scanf("%d", &Xold);
		scanf("%d", &Yold);
		
		for(int i=3; i<(2*N+2); i+=2) {
			scanf("%d", &X);
			scanf("%d", &Y);

			if(Y==Yold){ 		//linea horizontal
				xnear = Xm;
				ynear = Y;
				if(xnear>X && xnear>Xold) {
					if(X>Xold)
						xnear = X;
					else
						xnear = Xold;
				}
				if(xnear<X && xnear<Xold) {
					if(X<Xold)
						xnear = X;
					else
						xnear = Xold;
				}
			}else if(X==Xold) { //linea vertical
				xnear = X;
				ynear = Ym;
				if(ynear>Y && ynear>Yold) {
					if(Y>Yold)
						ynear = Y;
					else
						ynear = Yold;
				}
				if(ynear<Y && ynear<Yold) {
					if(Y<Yold)
						ynear = Y;
					else
						ynear = Yold;
				}

			}else{				//linea normal
				m=(double)(Y-Yold)/(X-Xold);
				b=Y-m*X;
				mp=(double)(-1)/m;
				bp=Ym-mp*Xm;
				
				//printf("m= %lf b= %lf\n", m, b);
				//printf("mp= %lf bp= %lf\n", mp, bp);

				xnear=(double)(bp-b)/(m-mp);
				ynear=m*(xnear)+b;

				//printf("xnear = %lf  ynear = %lf\n", xnear, ynear);

				if(xnear>X && xnear>Xold) {
					if(X>Xold){
						ynear=Yold;
						xnear=Xold;
					}
					else{
						ynear=Y;
						xnear=X;
					}
				} else if(xnear>X && xnear>Xold) {
					if(X<Xold){
						ynear=Yold;
						xnear=Xold;
					}
					else{
						ynear=Y;
						xnear=X;
					}
				}

			}
			


			distancia=sqrt(pow(Xm-xnear,2)+pow(Ym-ynear,2));

			if(i==3) {
				resultado=distancia;
				xres=xnear;
				yres=ynear;
			}else if(distancia<resultado) {
				resultado=distancia;
				xres=xnear;
				yres=ynear;
			}

			Xold=X;
			Yold=Y;

			//printf("distancia: %lf x= %lf y= %lf\n", distancia, xres, yres);

		}
		printf("%4.4lf\n%4.4lf\n", xres, yres);
		
	}

	return 0;
}