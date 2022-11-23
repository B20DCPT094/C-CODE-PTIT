#include <stdio.h>

#define ll long long

ll maxCrossingSum (ll a[], int l, int m, int r){
	ll sum=0, left_sum=-1e9, right_sum=-1e9;
	for (int i=m; i>=l; i--){
		sum+=a[i];
		if (sum>left_sum) left_sum=sum;
	}
	sum=0;
	for (int i=m+1; i<=r; i++){
		sum+=a[i];
		if (sum>right_sum) right_sum=sum;
	}
	return left_sum+right_sum;
}

ll max (ll a, ll b){
	if (a<b) return b;
	return a;
}

ll maxSubArraySum (ll a[], int l, int r){
	if (l==r) return a[l];
	int m=(l+r)/2;
	return max(maxSubArraySum(a,l,m),max(maxSubArraySum(a,m+1,r),maxCrossingSum(a,l,m,r)));
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		ll a[n];
		for (int i=0; i<n; i++) scanf("%lld", &a[i]);
		printf("%lld\n", maxSubArraySum(a,0,n-1));
	}
	return 0;
}
