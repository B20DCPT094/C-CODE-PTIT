#include<stdio.h> 
#include<string.h> 

void xoay(char a[]){ 
	char c[strlen(a)]; 
	strcpy(c,a); 
	for(int i=1;i<strlen(a);i++){ 
		a[i-1]=c[i]; 
	} 
	a[strlen(a)-1]=c[0]; 
} 

int main(){ 
	int n; scanf("%d ",&n); 
	char a[n][100]; 
	for(int i=0;i<n;i++){ 
		gets(a[i]);
	} 
	int n1=strlen(a[0]); 
	int min=10000;int ok=1; 
	for(int i=0;i<n;i++){ 
		char b[n][n1+1]; 
		int cnt=0; 
		for(int h=0;h<n;h++){ 
			strcpy(b[h],a[h]); 
		} 
		for(int j=0;j<n;j++){ 
			if(j!=i){ 
				int check=0; 
				for(int k=0;k<n1;k++){ 
					if(strcmp(b[j],b[i])==0)break; 
					xoay(b[j]); 
					cnt++; 
					check++; 
				} 
				if(check==n1)ok=0; 
			} 
		} 
		if(cnt<min)min=cnt; 
	} 
	if(ok==0)printf("-1"); 
	else printf("%d",min); 
} 