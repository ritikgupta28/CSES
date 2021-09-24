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
    ll a[n];
    unordered_map<ll, ll> ourmap;
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
    	ourmap[a[i]] = i;
	}
	
	
	ll ans = 1;
	for(ll i=2; i<=n; i++) {
		if(ourmap[i-1] > ourmap[i]) ans++;
	}
	
	while(m--) {
		ll x,y;
		cin>>x>>y;
		
		if(x > y) swap(x, y);
		
		x--;
		y--;
		ll val1 = a[x], val2 = a[y];
		if(val2 == val1-1) {
			ans--;
			if(val1 + 1 <= n && ourmap[val1 + 1] < x) ans--; // before swap remove round
			if(val1 + 1 <= n && y >= ourmap[val1 + 1]) ans++; // after swap
			
			if(val2 - 1 >= 1 && ourmap[val2 - 1] > y) ans--; // before swap remove round
			if(val2 - 1 >= 1 && x <= ourmap[val2 - 1]) ans++; // after swap
		}
		else if(val2 == val1+1) {
			ans++;
			if(val1 - 1 >= 1 && ourmap[val1 - 1] > x) ans--; // before swap remove round
			if(val1 - 1 >= 1 && y <= ourmap[val1 - 1]) ans++; // after swap
			
			if(val2 + 1 <= n && ourmap[val2 + 1] < y) ans--; // before swap remove round
			if(val2 + 1 <= n && x >= ourmap[val2 + 1]) ans++; // after swap
		}
		else {
			if(val1 - 1 >= 1 && ourmap[val1 - 1] > x) ans--; // before swap remove round
			if(val1 - 1 >= 1 && y <= ourmap[val1 - 1]) ans++; // after swap
			if(val1 + 1 <= n && ourmap[val1 + 1] < x) ans--; // before swap remove round
			if(val1 + 1 <= n && y >= ourmap[val1 + 1]) ans++; // after swap
			
			if(val2 - 1 >= 1 && ourmap[val2 - 1] > y) ans--; // before swap remove round
			if(val2 - 1 >= 1 && x <= ourmap[val2 - 1]) ans++; // after swap
			if(val2 + 1 <= n && ourmap[val2 + 1] < y) ans--; // before swap remove round
			if(val2 + 1 <= n && x >= ourmap[val2 + 1]) ans++; // after swap
		}
		
		ourmap[val1] = y;
		ourmap[val2] = x;
		swap(a[x], a[y]);
		
		cout<<ans<<"\n";
	}
}
