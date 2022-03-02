#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int solve(int h[], int s[], ll n, ll x, int **dp) {
    if(n == 0) return 0;

    if(dp[n][x] != -1) return dp[n][x];

    if(h[n-1] <= x) {
        dp[n][x] = max(s[n-1] + solve(h, s, n-1, x-h[n-1], dp), solve(h, s, n-1, x, dp));
    }
    else {
        dp[n][x] = solve(h, s, n-1, x, dp);
    }

    return dp[n][x];
}

void helper() {
    ll n,x;
    cin>>n>>x;
    int h[n], s[n];
    for(int i=0; i<n; i++) {
        cin>>h[i];
    }
    for(int i=0; i<n; i++) {
        cin>>s[i];
    }

    int **dp = new int*[n+1];
    for(ll i=0; i<=n; i++) {
        dp[i] = new int[x+1];
        for(ll j=0; j<=x; j++) {
            dp[i][j] = -1;
        }
    }

    cout<<solve(h, s, n, x, dp);
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}