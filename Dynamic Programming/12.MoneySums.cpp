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
    ll sum = 0;
    for(ll i=0; i<n; i++) {
        cin>>x[i];
        sum += x[i];
    }

    sort(x, x+n);

    bool dp[sum+1];
    memset(dp, false, sizeof(dp));
    dp[0] = true;
    for(ll i=0; i<n; i++) {
        for(ll j=sum; j>=1; j--) {
            if(x[i] <= j) dp[j] = dp[j] | dp[j-x[i]];
        }
    }

    vector<ll> ans;
    for(ll i=1; i<=sum; i++) {
        if(dp[i]) ans.push_back(i);
    }

    cout<<ans.size()<<"\n";
    for(ll i : ans) {
        cout<<i<<" ";
    }
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}