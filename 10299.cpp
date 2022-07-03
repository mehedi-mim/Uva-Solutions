#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Here is an implementation using factorization in O(sqrt(n)):
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}

int main()
{
     //freopen("0utput.txt","w",stdout);
     int n;
     while(scanf("%d",&n) && n){
      int ans = phi(n);
      if(n == 1) ans = 0;
      printf("%d\n",ans);
     }
    return 0;
}


