#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mark[(2000000>>5) + 100];
#define GET(x) (mark[(x)>>5]>>((x)&31)&1)
#define SET(x) (mark[(x)>>5] |= 1<<((x)&31))
ll phi[2000005];
void sieve() {
    for(ll i = 1;i <= 1000009;i++) phi[i] = i;
    register int i, j;
    SET(1);
    ll n = 1000009;
    for(i = 2; i <= n; i++) {
        if(!GET(i)) {
            for(j = i; j <= n; j += i) {
                phi[j] = phi[j]/i*(i-1);
                SET(j);
            }
        }
    }
    for(ll i = 1;i <= 1000000;i++) phi[i] = phi[i] + phi[i-1];
}

int main()
{
   sieve();
   ll n;
   while(scanf("%lld",&n) && n){
   ll ans = phi[n]-1;
   printf("%lld\n",ans);
   }
   return 0;
}

