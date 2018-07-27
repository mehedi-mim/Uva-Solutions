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

int main() {

    ll T;
    scl1(T);
    ll cs = 0;
    while(T--){
      ll n;scl1(n);
      ll arr[2009];
      memset(arr,0,sizeof arr);
      ll A,B,C;
      A = B = C = 100000;
      REP(i,0,n){
      ll x;scl1(x);arr[x]++;
      }
      ll sum[200];memset(sum,0,sizeof sum);
      sum[0] = arr[0];
      for(ll i = 1; i<= 200;i++) sum[i] = sum[i-1]+ arr[i];
      //REP(i,0,16) cout << sum[i] <<" ";
      //cout << endl;
      double keep = (double)n/(double)4;
      double mn = 1000000;
      for(ll k = 160;k >= 0;k--){
        for(ll j = k-1;j >= 0;j--){
          for(ll i = j-1;i >= 0;i--){
            ll Al,Ar,Bl,Br,Cl,Cr;
            Cr = 160;Cl = k-1;
            Br = Cl;Bl = j-1;
            Ar = Bl;Al = i-1;
          //cout << 0 << " " << Ar <<" " << Br <<" " << Cl << endl;
            double keep1[4];
            keep1[0] = ((Cl < 0)? sum[Cr]: sum[Cr] - sum[Cl]);
            keep1[1] = ((Bl < 0)? sum[Br]: sum[Br] - sum[Bl]);
            keep1[2] = ((Al < 0)? sum[Ar]: sum[Ar] - sum[Al]);
            keep1[3] = sum[Al];
            double temp = 0;
            REP(l,0,4){
            //cout << keep1[l] <<" ";
            temp += abs(keep1[l] - keep);
            }
            //cout << endl;
            if(temp <= mn){
              C = k-1;
              B = j-1;
              A = i-1;
              mn = temp;
              }
             //printf("%.10lf\n",keep);
            //cout << A <<" " << B <<" " << C << endl;
            }
          }
        }
         printf("Case %lld: %lld %lld %lld\n",++cs,A,B,C);
    }
     R;
}
/*
*/

