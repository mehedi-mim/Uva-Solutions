#include <bits/stdc++.h>
using namespace std;
#define ll            long long
#define pb            push_back
#define mp            make_pair
#define R             return 0
#define ff            first
#define ss            second
#define sc1(a)        scanf("%d",&a)
#define sc2(a,b)      scanf("%d%d",&a,&b)
#define scl1(a)       scanf("%lld",&a)
#define scl2(a,b)     scanf("%lld %lld",&a,&b)
#define pnt(a)        printf("%d\n",a)
#define pntl(a)       printf("%lld\n",a)
#define all(a)        a.begin(),a.end()
#define REP(it,a,b)   for(ll it = a;it < b;it++)
#define pii           pair<int,int>
#define pll           pair<long,long>
#define hi            puts("Hi..!")
#define MOD           1000000007
#define MAX           1000009
int fx[] = {1,-1,0,0};
int fy[] = {0,0,1,-1};
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
struct Sorter{int FS,SC;}; // Define array here before last ';'.
bool cmp(Sorter A,Sorter B){if(A.FS==B.FS) return A.SC < B.SC;return A.FS < B.FS;}
ll power(ll len)
{
   ll temp = 2;
   ll x = 2;
   if(len == 0) return 1LL;
   else if(len == 1) return x;
   for(ll i = 1;i < len;i++) temp *= x;
   return temp;
}
int main() {
   //freopen("0utput.txt","w",stdout);
   int T;
   scanf("%d",&T);
   int cs = 0;
   while(T--){
    ll O,A;
    scanf("%lld %lld",&O,&A);
    vector<ll> v1,v2;
    while(O){
      v1.pb(O%2);
      O /= 2;
    }
    while(A){
      v2.pb(A%2);
      A /= 2;
    }
    ll rem = v2.size() - v1.size();
    REP(i,0,rem) v1.pb(0);
    reverse(all(v1));
    reverse(all(v2));

    REP(i,0,v1.size()){
      ll keep = v1[i] ^ v2[i];
      if(keep){
        REP(j,i,v1.size()) v1[j] = 1;
        REP(j,i,v2.size()) v2[j] = 0;
        break;
      }
    }
    ll len = v1.size();
    ll i = 0;
//    REP(i,0,len) cout << v1[i];
//    cout << endl;
//    REP(i,0,len) cout << v2[i];
//    cout << endl;
    while(len--){
      if(v1[i])
      O += power(len);
      if(v2[i])
      A += power(len);
      i++;
    }
    printf("Case %d: %lld %lld\n",++cs,O,A);
   }

   R;
}
/*
*/

