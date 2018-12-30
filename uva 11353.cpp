#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > pr;


bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int status[(2000/32)+2];
vector<int> prime;
void sieve(int n)
{
     for(int  i = 3; i*i <= n; i+= 2)
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for(int  j = i*i; j <= n; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }
     prime.push_back(2);
	 for(int i=3;i<=n;i+=2) if( Check(status[i>>5],i&31)==0) prime.push_back(i);
}

int main()
{
    //freopen("0utput.txt","w",stdout);
    sieve(1500);
    for(int i = 1;i <= 2000000;i++){
        int cnt = 0;
        int temp = i;
        for(int j = 0;j < prime.size() && prime[j] <= temp;j++){
            int keep = prime[j];
            while(temp%keep == 0){
                cnt++;
                temp /= keep;
            }
        }
        if(temp > 2) cnt++;
        pr.push_back({cnt,i});
    }
    sort(pr.begin(),pr.end());
    int n;int cs = 0;
    while(scanf("%d",&n) && n){
        int keep = pr[n-1].second;
        printf("Case %d: %d\n",++cs,keep);
    }
    return 0;
}
