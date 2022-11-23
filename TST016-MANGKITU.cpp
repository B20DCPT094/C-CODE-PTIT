#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

void del (char c[], int pos){
	int n=strlen(c);
	for (int i=pos+1; i<n; i++) c[i-1]=c[i];
	c[n-1]='\0';
}

void solve(char c[]){
	int n=strlen(c);
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if(c[i]=='\'' && c[j]=='\'' || c[i]=='\"' && c[j]=='\"'){
				if ((j-i-1)%2==0){
					del(c,i);
					del(c,j-1);
					i--;
					j=i+1;
				}
			}
		}
	}
	for (int i=0; i<n; i++){
		if(c[i]=='(' && c[i]=='{' && c[i]=='[') continue;
		else if(c[i]=='\'' || c[i]=='\"') continue;
		else if(c[i]==')' && c[i-1]=='('){
			del(c,i-1); 
			del(c,i-1); 
			i-=2;
		}
		else if(c[i]=='}' && c[i-1]=='{'){
			del(c,i-1);
			del(c,i-1);
			i-=2;
		}
		else if(c[i]==']' && c[i-1]=='['){
			del(c,i-1); 
			del(c,i-1); 
			i-=2;
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
 //  	freopen("input.txt", "r", stdin);
 //  	freopen("output.txt", "w", stdout);
 //  	#endif
	char c[101];
	gets(c);
	solve(c);
	if (!strlen(c)) printf("1");
	else printf("0");
	return 0;
}
