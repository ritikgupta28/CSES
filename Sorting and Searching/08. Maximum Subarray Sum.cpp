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
    ll ans = INT_MIN;
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
    	ans = max(ans, a[i]);
	}
	
	if(ans > 0) {
		ll sum = 0;
		for(ll i=0; i<n; i++) {
			sum += a[i];
			if(sum < 0) sum = 0;
			ans = max(ans, sum);
		}
	}
	
	cout<<ans;
}
