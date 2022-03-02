#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll solve(ll x[], ll n, ll m, ll i, ll j, vector<vector<ll>> &dp) {
    if(j == 0 || j > m) return 0;
    if(i == n) return 1;

    if(dp[i][j] != -1) return dp[i][j];

    if(x[i] != 0) {
        if(x[i] == j-1 || x[i] == j || x[i] == j+1) return 1;
        else return 0;
    }

    ll ans = (solve(x, n, m, i+1, j-1, dp) + solve(x, n, m, i+1, j, dp) + solve(x, n, m, i+1, j+1, dp))%mod;

    return dp[i][j] = ans;
}

void helper() {
    ll n,m;
    cin>>n>>m;
    ll x[n];
    for(int i=0; i<n; i++) {
        cin>>x[i];
    }

    vector<vector<ll>> dp(n, vector<ll>(m+1, -1));

    ll ans = 1;
    for(ll i=0; i<n; i++) {
        if(x[i] == 0) {
            if(i == 0) {
                ans = 0;
                for(ll j=1; j<=m; j++) {
                    ans = (ans + solve(x, n, m, i+1, j, dp))%mod;
                }
            }
            else if(x[i-1] != 0) {
                ans = (ans * (solve(x, n, m, i+1, x[i-1]-1, dp) + solve(x, n, m, i+1, x[i-1], dp) + solve(x, n, m, i+1, x[i-1]+1, dp))%mod)%mod;
            }
        }
        else {
            if(i != 0 && x[i-1] != 0) {
                if(x[i-1] == x[i]-1 || x[i-1] == x[i] || x[i-1] == x[i]+1) continue;
                else ans = 0;
            }
        }
    }

    cout<<ans<<"\n";
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}