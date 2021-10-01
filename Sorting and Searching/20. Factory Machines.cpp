#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

bool isPossible(ll a[], ll n, ll targetProducts, ll tempTime) {
	ll currProducts = 0;
	for(ll i=0; i<n; i++) {
		currProducts += (tempTime/a[i]);
		if(currProducts >= targetProducts) return true;
	}
	
	return false;
}

int main() {
    fastIO;
    
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	sort(a, a+n);
	
	ll l = 1, r = 1e18;
	while(l < r) {
		ll mid = l + (r-l)/2;
		if(isPossible(a, n, t, mid)) r = mid;
		else l = mid+1;
	}
	
	cout<<l;
}
