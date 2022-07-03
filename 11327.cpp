#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Here is an implementation using factorization in O(sqrt(n)):
ll arr[300000];
ll cum[300000];
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
     ll sum = 1;
     ll pos = 0;
     arr[pos++] = 1;
     while(sum < 12158598919){
        int x = phi((int)pos);
        cum[pos] = x;
        sum += x;
        arr[pos++] = sum;
     }
     ll n;
     while(scanf("%lld",&n) && n){
        if(n <= 2){
           if(n == 1) puts("0/1");
           else puts("1/1");
        }
        else{
            ll idx = upper_bound(arr,arr+pos,n) - arr;
            if(arr[idx-1] == n) idx--;
            ll peek = cum[idx];
            ll keep = arr[idx] - n;
            peek -= keep;

            ll cnt = 0;
            for(ll i = 1;i <= idx;i++){
                if(__gcd(i,idx) == 1){
                    cnt++;
                }
                if(cnt == peek){
                    printf("%lld/%lld\n",i,idx);
                    break;
                }
            }
            //cout << idx <<" " << cnt << endl;

        }
     }
    return 0;
}


