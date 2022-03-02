#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

void helper() {
    ll n;
    cin>>n;

    char grid[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>grid[i][j];
        }
    }

    ll dp[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(grid[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }

            if(i == 0 && j == 0) dp[i][j] = 1;
            else if(i == 0) dp[i][j] = dp[i][j-1];
            else if(j == 0) dp[i][j] = dp[i-1][j];
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
        }
    }

    cout<<dp[n-1][n-1];
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}