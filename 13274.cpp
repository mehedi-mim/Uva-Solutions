
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
#define scl1(a)       scanf("%I64d",&a)
#define scl2(a,b)     scanf("%I64d %I64d",&a,&b)
#define pnt(a)        printf("%d\n",a)
#define pntl(a)       printf("%I64d\n",a)
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
struct Sorter{int fs,sc;}; // Define array here before last ';'.
bool cmp(Sorter A,Sorter B){if(A.fs==B.sc) return A.sc < B.sc;return A.fs < B.fs;}
vector<int> G[1010];
int dfs(int ancestor,int u,int m)
{
      if(G[u].size() < m) return 1;
      priority_queue<int> v;
      int ret = 1;
      REP(i,0,G[u].size()){
        if(G[u][i] == ancestor) continue;
        v.push(dfs(u,G[u][i],m));
      }
      if(v.size() < m) return 1;
      REP(i,0,m){
      int top = v.top();
       v.pop();
      ret += top;
      }
      return ret;

}
int main() {

   int T;
   sc1(T);int tc = 0;
   while(T--){
    int n,m;
    sc2(n,m);
    int ans = 0;
    for(int i = 0;i < 1009;i++) G[i].clear();
    REP(i,1,n){
      int u,v;sc2(u,v);
      G[u].pb(v);G[v].pb(u);
    }
    int ancestor = -1;
    ans = dfs(ancestor,1,m);
    printf("Case %d: %d\n",++tc,ans);
   }
   R;
}
/*
1000
16 2
1 2
1 3
1 4
2 5
2 6
5 7
5 8
6 9
6 10
3 11
3 12
4 14
4 13
14 15
14 16
*/
