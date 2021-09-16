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
    ll x[n];
    for(ll i=0; i<n; i++) {
    	cin>>x[i];
	}
	
	sort(x, x+n);
	
	ll ans = 1;
	for(ll i=1; i<n; i++) {
		if(x[i] != x[i-1]) ans++;
	}
	
	cout<<ans;
}
