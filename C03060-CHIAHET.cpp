#include <stdio.h>

int legendre (int n, int p){
    int ans=0;
    for (int i=p; i<=n; i*=p)
        ans+=n/i;
    return ans;
}

int main(){
    int n, k; 
    scanf("%d%d", &n, &k);
    if (legendre(n, 2) >= k) printf("Yes");
    else printf("No");
    return 0;
}