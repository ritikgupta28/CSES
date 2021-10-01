#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    pll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i].first>>a[i].second;
	}
	
	sort(a, a+n);
	
	ll ans = 0, curr = 0;
	for(ll i=0; i<n; i++) {
		curr += a[i].first;
		ans += a[i].second - curr;
	}
	
	cout<<ans;
}
