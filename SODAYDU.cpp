#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(char c[]){
	int n=strlen(c);
	int cnt[10]={0};
	if (c[0]=='0'){
		printf("INVALID\n"); return;
	}
	for (int i=1; i<n; i++){
		if (!isdigit(c[i])){
			printf("INVALID\n"); return;
		}
	}
	for (int i=0; i<n; i++){
		cnt[c[i]-'0']++;
	}
	for (int i=0; i<10; i++){
		if (cnt[i]==0){
			printf("NO\n"); return;
		}
	}
	printf("YES\n");
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		char c[1001]; scanf("%s", c);
		solve(c);
	}
	return 0;
}
