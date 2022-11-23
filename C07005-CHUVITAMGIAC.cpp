#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct point{
	double x,y;
};

typedef struct point p;

double dis(p a, p b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		p a,b,c;
		scanf("%lf %lf %lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
		double d1=dis(a,b);
		double d2=dis(b,c);
		double d3=dis(a,c);
		if (d1<=0 || d2<=0 || d3<=0 || d1+d2<=d3 || d1+d3<=d2 || d2+d3<=d1) printf("INVALID\n");
		else{
			printf("%.3lf\n", d1+d2+d3);
		}
	}
	return 0;
}
