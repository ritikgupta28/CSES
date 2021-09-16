#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

bool comp(pair<ll, ll> a, pair<ll, ll> b) {
	if(a.second == b.second) return a.first < b.first;
	
	return a.second < b.second;
}

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    pair<ll, ll> a[n];
    for(ll i=0; i<n; i++) {
    	ll s,e;
    	cin>>s>>e;
    	a[i].first = s;
    	a[i].second = e;
	}
	
	sort(a, a+n, comp);
	
	ll ans = 0, endTime = 0;
	for(ll i=0; i<n; i++) {
		if(endTime <= a[i].first) {
			ans++;
			endTime = a[i].second;
		}
	}
	
	cout<<ans;
}
