#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct ts{
	int id;
	char ten[50];
	char ns[50];
	float d1, d2, d3;
};

typedef struct ts ts;

float tong(ts a){
	return a.d1 + a.d2 + a.d3;
}

int main(){
	int n; scanf("%d", &n);
	ts a[n];
	float max=0;
	for (int i=0; i<n; i++){
		getchar();
		a[i].id = i+1;
		gets(a[i].ten);
		scanf("%s", a[i].ns);
		scanf("%f %f %f", &a[i].d1, &a[i].d2, &a[i].d3);
		float res = tong(a[i]);
		if (res>max) max=res;
	}
	for (int i=0; i<n; i++){
		if (tong(a[i])==max) printf("%d %s %s %.1f\n", a[i].id, a[i].ten, a[i].ns, tong(a[i]));
	}
	return 0;
}
