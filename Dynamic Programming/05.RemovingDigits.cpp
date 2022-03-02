#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll solve(ll n, ll dp[]) {
    if(n == 0) return 0;

    if(dp[n] != INT_MAX) return dp[n];

    ll x = n;
    while(x) {
        if(x%10 == 0) {
            x /= 10;
            continue;
        }

        dp[n] = min(dp[n], 1 + solve(n - (x%10), dp));
        x /= 10;
    }

    return dp[n];
}

void helper() {
    ll n;
    cin>>n;

    ll dp[n+1] = {0};
    for(int i=1; i<=n; i++) {
        dp[i] = INT_MAX;
    }

    cout<<solve(n, dp);
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}