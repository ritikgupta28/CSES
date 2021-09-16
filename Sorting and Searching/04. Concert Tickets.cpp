#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    ll n,m;
    cin>>n>>m;
    multiset<ll> h;
	ll t[m];
    for(ll i=0; i<n; i++) {
    	ll x;
    	cin>>x;
    	h.insert(x);
	}
	for(ll i=0; i<m; i++) {
		cin>>t[i];
	}
	
	for(ll i=0; i<m; i++) {
		auto it = h.upper_bound(t[i]);
		if(it == h.begin()) {
			cout<<"-1\n";
			continue;
		}
		
		it--;
		cout<<*it<<"\n";
		h.erase(it);
	}
}
