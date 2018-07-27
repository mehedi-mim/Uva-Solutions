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

    int T;sc1(T);
    while(T--){
      string s;
      cin >> s;int n;sc1(n);
      char pos[27];
      map<char,char> letter;
      for(char i = 'A';i <= 'Z';i++){
        letter[i] = i;
      }
      while(n--){
        string s1,s2;cin >> s1 >> s2;
        for(int i = 'A';i <= 'Z';i++){
          if(letter[i] == s2[0]){
            letter[i] = s1[0];
          }
        }
      }
      int len = s.size();
      REP(i,0,len) cout << letter[s[i]];
      cout << endl;
    }
   R;
}
/*
*/

