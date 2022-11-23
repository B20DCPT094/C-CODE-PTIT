#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;

//stable_sort: bubble sort, insertion sort, merge sort

struct ts{
	int id;
	char name[50];
	char date[15];
	float d1, d2, d3;
};

typedef struct ts ts;

void nhap (ts *a, int ma){
	getchar();
	a->id=ma;
	gets(a->name);
	scanf("%s", a->date);
	scanf("%f %f %f", &a->d1, &a->d2, &a->d3);
}

float tong (ts a){
	return a.d1+a.d2+a.d3;
}

void in (ts a){
	printf("%d %s %s %.1f\n", a.id, a.name, a.date, tong(a));
}

int cmp (const void *a, const void *b){
	ts *x = (ts*)a;
	ts *y = (ts*)b;
	if (tong(*x)==tong(*y)) return x->id>y->id;
	if (tong(*x)<tong(*y)) return 1;
	return -1;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int n; scanf("%d", &n);
	ts a[n];
	for (int i=0; i<n; i++) nhap(&a[i],i+1);
	qsort(a,n,sizeof(ts),cmp);
	for (int i=0; i<n; i++) in(a[i]);
	return 0;
}
