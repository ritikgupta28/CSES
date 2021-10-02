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
	
	ll ans = 0, sum = 0;
	ll i = 0, j = 0;
	while(j < n) {
		if(sum < x) {
			sum += a[j++];
		}
		else if(sum > x) {
			sum -= a[i++];
		}
		else {
			ans++;
			sum += a[j++];
			sum -= a[i++];
		}
	}
	while(i < n) {
		if(sum == x) ans++;
		sum -= a[i++];
	}
	
	cout<<ans;
}
