#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	map<ll, ll> ourmap;
	ll ans = 0, sum = 0;
	ourmap[0] = 1;
	for(ll i=0; i<n; i++) {
		sum += a[i];
		if(ourmap.count(sum - x) > 0) ans += ourmap[sum - x];
		ourmap[sum]++;
	}
	
	cout<<ans;
}
