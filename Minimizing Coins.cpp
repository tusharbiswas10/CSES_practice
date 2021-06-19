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
 
    vector<ll> dp(x+1,INT_MAX);
    dp[0]=0;
    vector<ll>coin(n);
 
    for (int i = 0; i < n; ++i)
    {
        cin>>coin[i];
    }
 
 
    for (int i = 1; i <= x; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
           if(coin[j]>i){
            continue;
           }
 
           dp[i]=min(dp[i],dp[i-coin[j]]+1);
        }
    }
 
    if(dp[x]==INT_MAX){
        cout<<-1;
    }
 
    else{
        cout<<dp[x];
    }
    
    return 0;
}
