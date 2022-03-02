#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

void helper() {
    ll a,b;
    cin>>a>>b;

    ll dp[a+1][b+1];
    memset(dp, 0, sizeof(dp));
    
    for(ll i=1; i<=a; i++) {
        for(ll j=1; j<=b; j++) {
            if(i == j) continue;
            
            dp[i][j] = INT_MAX;
            for(int k=1; k<i; k++) {
                dp[i][j] = min(dp[i][j], 1+dp[k][j]+dp[i-k][j]);
            }
            for(int k=1; k<j; k++) {
                dp[i][j] = min(dp[i][j], 1+dp[i][k]+dp[i][j-k]);
            }
        }
    }
    
    cout<<dp[a][b];
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}