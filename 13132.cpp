#include <bits/stdc++.h>
using namespace std;

int mark[(2000000>>5) + 100];
#define GET(x) (mark[(x)>>5]>>((x)&31)&1)
#define SET(x) (mark[(x)>>5] |= 1<<((x)&31))
int phi[2000005];
void sieve() {
    for(int i = 1;i <= 100009;i++) phi[i] = i;
    register int i, j;
    SET(1);
    int n = 100009;
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
   sieve();
   int T;scanf("%d",&T);
   while(T--){
   int N;
   scanf("%d",&N);
   int ans = phi[N];
   if(N == 1) ans = 0;
   printf("%d\n",ans);
   }
   return 0;
}
