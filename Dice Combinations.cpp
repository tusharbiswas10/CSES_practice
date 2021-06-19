#include <bits/stdc++.h>
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
 
   ll n;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (ll i = 2; i <= n; i++)
    {
        for (ll  j = 1; j <= 6; ++j)
        {
            if (j> i){
                continue;
            } 
            else
                dp[i] = ( dp[i] + dp[i - j]) % mod ;
        }
    }
    cout << dp[n]  ;
    
    return 0;
}
