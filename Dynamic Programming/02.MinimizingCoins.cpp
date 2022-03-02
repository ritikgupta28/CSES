#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

void helper() {
    ll n,x;
    cin>>n>>x;
    ll c[n];
    for(int i=0; i<n; i++) {
        cin>>c[i];
    }

    sort(c, c+n);

    ll dp[x+1];
    dp[0] = 0;
    for(int i=1; i<=x; i++) {
        dp[i] = INT_MAX;
    }

    for(int i=1; i<=x; i++) {
        for(int j=0; j<n; j++) {
            if(c[j] > i) break;
            dp[i] = min(dp[i], 1 + dp[i-c[j]]);
        }
    }

    if(dp[x] == INT_MAX) dp[x] = -1;

    cout<<dp[x];
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}