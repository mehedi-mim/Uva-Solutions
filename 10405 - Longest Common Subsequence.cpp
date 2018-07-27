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
int dp[10009][10009];
int solve(string s1,string s2,int i,int j,int l1,int l2)
{
  //hi;
  if(i >= l1 || j >= l2) return 0;
  if(dp[i][j] != -1) return dp[i][j];
  if(s1[i] == s2[j]) return 1 + solve(s1,s2,i+1,j+1,l1,l2);
  else{
    int ret1 = solve(s1,s2,i+1,j,l1,l2);
    int ret2 = solve(s1,s2,i,j+1,l1,l2);
    dp[i][j] =  max(ret1,ret2);
    return dp[i][j];
  }
}
int main() {
 //freopen("0utput.txt","w",stdout);
 string s1,s2;
 while(getline(cin,s1)){
  getline(cin,s2);
  int l1,l2;
  memset(dp,-1,sizeof dp);
  l1 = s1.size();l2 = s2.size();
  int ans = solve(s1,s2,0,0,l1,l2);
  pnt(ans);
 }
}
/*
*/

