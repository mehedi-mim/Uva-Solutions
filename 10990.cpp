#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mark[(2000000>>5) + 100];
#define GET(x) (mark[(x)>>5]>>((x)&31)&1)
#define SET(x) (mark[(x)>>5] |= 1<<((x)&31))
int phi[2000005];
ll dp[2000005];
ll cum[2000005];
void sieve() {
    register int i, j;
    SET(1);
    int n = 2000000;
    for(i = 2; i <= n; i++) {
        if(!GET(i)) {
            for(j = i; j <= n; j += i) {
                phi[j] = phi[j]/i*(i-1);
                SET(j);
            }
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("0utput.txt","w",stdout);
    for(int i = 1;i <= 2000000;i++) phi[i] = i;
    sieve();
//    for(int i = 1;i <= 20;i++) cout << phi[i] <<" ";
//    cout << endl;
    for(int i = 2;i <= 2000000;i++){
    dp[i] = dp[phi[i]] + 1;
    cum[i] = cum[i-1] + dp[i];
    }
    int T;scanf("%d",&T);
    while(T--){
    ll a,b;
    scanf("%lld %lld",&a,&b);
    ll ans = cum[b] - cum[a-1];
    printf("%lld\n",ans);
    }
    return 0;
}
