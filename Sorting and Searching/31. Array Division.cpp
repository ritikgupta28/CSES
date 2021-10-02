#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

bool isPossible(ll a[], ll n, ll k, ll target) {
	ll cnt = 1, currSum = 0;
	for(ll i=0; i<n; i++) {
		if(a[i] > target) return false;
		
		if(currSum + a[i] > target) {
			currSum = a[i];
			cnt++;
		}
		else {
			currSum += a[i];
		}
		
		if(cnt > k) return false;
	}
	
	return true;
}

int main() {
    fastIO;
    
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll l = INT_MAX, h = 0;
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
    	l = min(l, a[i]);
    	h += a[i];
	}
	
	while(l < h) {
		ll mid = l + (h-l)/2;
		if(isPossible(a, n, k, mid)) h = mid;
		else l = mid+1;
	}
	
	cout<<l<<" ";
}
