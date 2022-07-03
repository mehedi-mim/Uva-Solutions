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
    //freopen("0output.txt","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        double ans = 0;
        double keep = (double)k * log10((double)n);
        ans = (keep) - (ll)keep;
        ans = pow(10,ans);
        ll first = ans * 100;
        ll last = binpow(n,k,1000);
        printf("%lld...",first);
        int temp = last;
        int cnt = 0;
        if(temp == 0) cnt = 1;
        while(temp){
            temp/= 10;
            cnt++;
        }
        cnt = (3-cnt);
        while(cnt--){
            printf("0");
        }
        printf("%lld",last);
        printf("\n");
    }
    return 0;
}
