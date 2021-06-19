#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
#define endl        "\n"
#define pb          push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
 
 
using namespace std;
 

 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    ll n,x;
    cin>>n>>x;
    vector<ll> dp(x + 1, 0);
    
    dp[0] = 1;
    vector<ll> coin(n);
    for (int i = 0; i <= n-1; ++i)
    {
        cin>>coin[i];
    }
    for (ll i = 1; i <= x; i++)
    {
        for (ll  j = 0; j <= n-1; ++j)
        {
            if (coin[j]> i){
                continue;
            } 
            else
                dp[i] = ( dp[i] + dp[i - coin[j]]) % mod ;
        }
    }
    cout <<dp[x] %mod ;
    
    return 0;
}
