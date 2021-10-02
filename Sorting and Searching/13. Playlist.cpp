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
    ll ans = 0, prev = 0;
	map<ll, ll> ourmap;
	for(ll i=0; i<n; i++) {
		cin>>a[i];
		if(ourmap.count(a[i]) > 0) {
			prev = max(prev, ourmap[a[i]] + 1);
		}
		ourmap[a[i]] = i;
		ans = max(ans, i-prev+1);
	}
	
	cout<<ans;
}
