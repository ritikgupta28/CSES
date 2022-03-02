#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll solve(string &a, string &b, ll n, ll m, vector<vector<ll>> &dp) {
    if(n == 0 && m == 0) return 0;
    else if(n == 0 || m == 0) return max(n, m);

    if(dp[n][m] != -1) return dp[n][m];

    if(a[n-1] == b[m-1]) {
        return dp[n][m] = solve(a, b, n-1, m-1, dp);
    }
    else {
        return dp[n][m] = 1 + min({solve(a, b, n-1, m-1, dp), solve(a, b, n-1, m, dp), solve(a, b, n, m-1, dp)});
    }
}

void helper() {
    string a,b;
    cin>>a>>b;

    ll n = a.length(), m = b.length();

    vector<vector<ll>> dp(n+1, vector<ll>(m+1, -1));

    solve(a, b, n, m, dp);

    cout<<dp[n][m];
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}