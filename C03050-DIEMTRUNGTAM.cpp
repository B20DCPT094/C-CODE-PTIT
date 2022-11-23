#include <stdio.h>

int check (int xA, int yA, int xB, int yB, int xC, int yC){
	if ((xA-xB)*(yB-yC) == (xB-xC)*(yA-yB)) return 1;
	return 0;
}

int main(){
	int n; scanf("%d", &n);
	int x[n],y[n];
	int ok=0;
	for (int i=0; i<n-1; i++) scanf("%d %d", &x[i], &y[i]);
	for (int i=0; i<n-3; i++){
		if (check(x[i], y[i], x[i+1], y[i+1], x[i+2], y[i+2])==0){
			ok=1; break;
		}
	}
	if (!ok) printf("Yes");
	else printf("No");
	return 0;
}
