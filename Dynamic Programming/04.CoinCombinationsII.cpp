#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

// ll solve(ll c[], ll n, ll x, int **dp) {
//     if(x == 0) return 1;
//     else if(x < 0 || n == 0) return 0;

//     if(dp[n][x] != -1) return dp[n][x];

//     ll ans = (solve(c, n, x-c[n-1], dp) + solve(c, n-1, x, dp))%mod;

//     return dp[n][x] = ans;
// }

void helper() {
    ll n,x;
    cin>>n>>x;
    ll c[n];
    for(int i=0; i<n; i++) {
        cin>>c[i];
    }

    sort(c, c+n);

    // TLE 100*1000000
    // int **dp;
    // dp = new int *[n+1];
    // for(int i=0; i<=n; i++) {
    //     dp[i] = new int[x+1];
    // }

    // for(int i=0; i<=n; i++) {
    //     for(int j=0; j<=x; j++) {
    //         dp[i][j] = -1;
    //     }
    // }

    // cout<<solve(c, n, x, dp);

    int dp[n][x+1];
    memset(dp, 0, sizeof(dp));

    for(int i=0; i<n; i++) {
        for(int j=0; j<=x; j++) {
            if(j == 0) dp[i][j] = 1;
            else dp[i][j] = ((j >= c[i] ? dp[i][j-c[i]] : 0) + (i > 0 ? dp[i-1][j]: 0))%mod;
        }
    }

    cout<<dp[n-1][x];    
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}