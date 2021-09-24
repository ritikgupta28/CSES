#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	unordered_map<ll, ll> ourmap;
	ll ans = 0;
	for(ll i=0; i<n; i++) {
		if(ourmap.count(a[i]-1) == 0) ans++;
		
		ourmap[a[i]] = 1;
	}
	
	cout<<ans;
}
