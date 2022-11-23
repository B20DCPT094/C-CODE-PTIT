#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void solve (char c[]){
	if (c[0]=='0'){
		printf("INVALID\n");
		return;
	}
	for (int i=1; i<strlen(c); i++){
		if (!isdigit(c[i])){
			printf("INVALID\n");
			return;
		}
	}
	int chan=0, le=0;
	for (int i=0; i<strlen(c); i++){
		if ((c[i]-'0')%2==0) ++chan;
		else ++le;
	}
	if ((strlen(c)%2==0 && chan>le) || (strlen(c)%2!=0 && le>chan)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		char c[1000];
		scanf("%s", c);
		solve(c);
	}
	return 0;
}
