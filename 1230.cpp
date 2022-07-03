#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll tc;
    while(scanf("%lld",&tc)){
        if(tc == 0) break;
        for(int i = 1;i <= tc;i++){
        ll x,y,n;
        scanf("%lld %lld %lld",&x,&y,&n);
        ll ans = binpow(x,y,n);
        printf("%lld\n",ans);
        }

    }
    return 0;
}
