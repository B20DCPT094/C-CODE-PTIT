#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

void chuanHoa (char c[]){
	c[0]=toupper(c[0]);
	for (int i=1; i<strlen(c); i++) c[i]=tolower(c[i]);
}

void vietHoa (char c[]){
	for (int i=0; i<strlen(c); i++) c[i]=toupper(c[i]);
}

int main(){
	int t; scanf("%d", &t);
	scanf("\n");
	while (t--){
		char c[100];
		gets(c);
		char a[20][50];
		int n=0;
		char* token=strtok(c," ");
		while (token!=NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		for (int i=1; i<n; i++){
			chuanHoa(a[i]);
			printf("%s", a[i]);
			if (i!=n-1) printf(" ");
			else printf(", ");
		}
		vietHoa(a[0]);
		printf("%s", a[0]);
		printf("\n");
	}
	return 0;
}
