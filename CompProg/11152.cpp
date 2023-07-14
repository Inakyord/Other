#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b, c;
	double x1,x2,x3;
	double y1,y2,y3;
	double angle;
	double mult;
	double A1, B1, C1, D1;
	double r;
	double circle, triangle, lilCircle;

	while(scanf("%d %d %d", &a, &b, &c) != EOF) {

		x1 = 0;
		y1 = 0;

		mult=(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
		angle=acos(mult);
		
		x2 = 0;
		y2 = b;

		x3 = c*sin(angle);
		y3 = c*cos(angle);

		//printf("Res = %lf\n", mult);
		//printf("Angle = %lf\n", angle);
		//printf("A(%lf,%lf)\n", x1, y1);
		//printf("B(%lf,%lf)\n", x2, y2);
		//printf("C(%lf,%lf)\n", x3, y3);

		A1=x1*(y2-y3)-y1*(x2-x3)+x2*y3-x3*y2;
		B1=(x1*x1+y1*y1)*(y3-y2)+(x2*x2+y2*y2)*(y1-y3)+(x3*x3+y3*y3)*(y2-y1);
		C1=(x1*x1+y1*y1)*(x2-x3)+(x2*x2+y2*y2)*(x3-x1)+(x3*x3+y3*y3)*(x1-x2);
		D1=(x1*x1+y1*y1)*(x3*y2-x2*y3)+(x2*x2+y2*y2)*(x1*y3-x3*y1)+(x3*x3+y3*y3)*(x2*y1-x1*y2);
		
		r=sqrt((pow(B1,2)+pow(C1,2)-4*A1*D1)/(4*pow(A1,2)));
		//printf("\nr = %lf\n", r);

		circle=M_PI*r*r;
		triangle=(b*c*sin(angle))/2;
		circle-=triangle;
		lilCircle=pow(2*triangle/(a+b+c),2)*M_PI;
		triangle-=lilCircle;

		printf("%5.4lf %5.4lf %5.4lf\n", circle, triangle, lilCircle);
	}
	return 0;
}