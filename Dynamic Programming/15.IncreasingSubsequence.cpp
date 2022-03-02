#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

void helper() {
    ll n;
    cin>>n;
    ll x[n];
    for(ll i=0; i<n; i++) {
        cin>>x[i];
    }

    // ll ans = 1;
    // vector<ll> dp(n, 1);
    // for(ll i=1; i<n; i++) {
    //     for(ll j=i-1; j>=0; j--) {
    //         if(x[i] > x[j]) dp[i] = max(dp[i], 1+dp[j]);
    //     }
    //     ans = max(ans, dp[i]);
    // }

    // cout<<ans;

    vector<ll> ans;
    for(ll i=0; i<n; i++) {
        auto it = lower_bound(ans.begin(), ans.end(), x[i]);
        if(it == ans.end()) {
            ans.push_back(x[i]);
        }
        else {
            *it = x[i];
        }
    }

    cout<<ans.size();
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}