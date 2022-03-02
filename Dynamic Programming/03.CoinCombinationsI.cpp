#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll dp[1000001];

ll solve(ll c[], ll n, ll x) {
    if(x == 0) return 1;
    else if(x < 0) return 0;

    if(dp[x] != -1) return dp[x];

    ll ans = 0;
    for(int i=0; i<n; i++) {
        ans = (ans + solve(c, n, x-c[i]))%mod;
    }

    return dp[x] = ans;
}

void helper() {
    ll n,x;
    cin>>n>>x;
    ll c[n];
    for(int i=0; i<n; i++) {
        cin>>c[i];
    }

    memset(dp, -1, sizeof(dp));

    cout<<solve(c, n, x);
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}