#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct mh{
	int id;
	char ten[101];
	char loai[101];
	double mua, ban;
};

typedef struct mh mh;

double ln (mh a){
	return a.ban-a.mua;
}

void sx (mh a[], int n){
	for (int i=0; i<n-1; i++){
		int max = i;
		for (int j=i+1; j<n; j++){
			if (ln(a[j])>ln(a[max])) max=j;
		}
		mh tmp = a[i];
		a[i] = a[max];
		a[max] = tmp;
	}
}

int main(){
	int n; scanf("%d", &n);
	mh a[n];
	for (int i=0; i<n; i++){
		getchar();
		a[i].id=i+1;
		gets(a[i].ten);
		gets(a[i].loai);
		scanf("%lf %lf", &a[i].mua, &a[i].ban);
	}
	sx(a,n);
	for (int i=0; i<n; i++){
		printf("%d %s %s %.2lf\n", a[i].id, a[i].ten, a[i].loai, ln(a[i]));
	}
	return 0;
}
