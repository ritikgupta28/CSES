#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll power(ll x, ll y) {
    if(y == 0) return 1;

    ll ans = power(x, y/2);
    ans = (ans*ans)%mod;

    if(y%2 == 0) return ans;
    else return (ans*x)%mod;
}

ll modInverse(ll x) {
    return power(x, mod-2);
}

ll solve(ll n, ll sum, vector<vector<ll>> &dp) {
    if(sum == 0) return 1;
    else if(sum < 0 || n == 0) return 0;

    if(dp[n][sum] != -1) return dp[n][sum];

    return dp[n][sum] = (solve(n-1, sum-n, dp) + solve(n-1, sum, dp))%mod;
}

void helper() {
    ll n;
    cin>>n;
    
    ll sum = n*(n+1)/2;

    if(sum%2 == 1) {
        cout<<"0";
        return;
    }

    sum /= 2;
    vector<vector<ll>> dp(n+1, vector<ll>(sum+1, -1));

    ll ans = solve(n, sum, dp);
    ll modI = modInverse(2);
    ans = (ans*modI)%mod;

    // ans = 0;
    // for(ll i=0; i<=n; i++) {
    //     if(dp[i][sum] != -1) ans += dp[i][sum];
    // }

    cout<<ans;
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}