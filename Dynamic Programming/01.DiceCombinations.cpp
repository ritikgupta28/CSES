#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll solve(ll n) {
    if(n < 0) return 0;
    else if(n == 0) return 1;

    ll ans = 0;
    for(ll i=1; i<=6; i++) {
        ans += solve(n-i);
    }

    return ans;
}

void helper() {
    ll n;
    cin>>n;

    // cout<<solve(n);

    ll dp[n+1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=6; j++) {
            if(j <= i) dp[i] = (dp[i] + dp[i-j])%mod;
        }
    }

    cout<<dp[n];
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}