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
	
	sort(a, a+n);
	
	ll ans = 0;
	if(n%2 == 0) {
		ll ans1 = 0, mid1 = n/2;
		ll ans2 = 0, mid2 = mid1-1;
		for(int i=0; i<n; i++) {
			ans1 += abs(a[mid1] - a[i]);
			ans2 += abs(a[mid2] - a[i]);
		}
		
		ans = min(ans1, ans2);
	}
	else {
		for(ll i=0; i<n; i++) {
			ans += abs(a[n/2] - a[i]);
		}
	}
	
	cout<<ans;
}
