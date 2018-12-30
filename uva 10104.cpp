#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll ext_gcd(ll A,ll B,ll* X,ll* Y){
ll x2,y2,x1,y1,x,y,r2,r1,q,r;
x2 = 1;y2 = 0;
x1 = 0;y1 = 1;
for(r2 = A,r1 = B;r1 != 0;r2 = r1,r1 = r,x2 = x1,y2 = y1,x1 = x,y1 = y){
    q = r2/r1;
    r = r2%r1;
    x = x2 - (q*x1);
    y = y2 - (q*y1);
}
*X = x2;*Y = y2;return r2;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("0utput.txt","w",stdout);
    ll a,b;
    while(scanf("%lld %lld",&a,&b) != EOF){
       ll  x,y;
       ll G = ext_gcd(a,b,&x,&y);
    printf("%lld %lld %lld\n",x,y,G);
    }
    return 0;
}
