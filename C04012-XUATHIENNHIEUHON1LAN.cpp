#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) scanf("%d", &a[i]);
	int cnt[101]={0};
	int used[101];
	for (int i=0; i<n; i++){
		cnt[a[i]]++;
		used[a[i]]=0;
	}
	for (int i=0; i<n; i++){
		if (cnt[a[i]]>1 && !used[a[i]]){
			printf("%d ", a[i]);
			used[a[i]]=1;
		}
	}
	return 0;
}
