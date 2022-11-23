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

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int t; scanf("%d", &t);
	while (t--){
		int n,m; scanf("%d %d", &n, &m);
		char f[n][m];
		for (int i=0; i<n; i++) scanf("%s", &f[i]);
		ll cnt=0;
		for (int i=0; i<n; i++){
			int cnt1=0, cnt2=0;
			for (int j=0; j<m; j++){
				if (f[i][j]=='0') continue;
				for (int k=0; k<m; k++){
					if (f[i][j]=='1' && f[i][k]=='2') ++cnt1;
					if (f[i][j]=='2' && f[i][k]=='1') ++cnt1;
				}
				for (int k=0; k<n; k++){
					if (f[i][j]=='1' && f[k][j]=='2') ++cnt2;
					if (f[i][j]=='2' && f[k][j]=='1') ++cnt2;
				}
				cnt+=1ll*cnt1*cnt2;
				cnt1=0;
				cnt2=0;
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
