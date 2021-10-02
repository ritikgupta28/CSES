#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

bool comp(pair<pll, ll> a, pair<pll, ll> b) {
	if(a.first.first == b.first.first) return a.first.second > b.first.second;
	
	return a.first.first < b.first.first;
}

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    pair<pll, ll> a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i].first.first>>a[i].first.second;
    	a[i].second = i;
	}
	
	sort(a, a+n, comp);
	
	bool ans1[n], ans2[n];
	memset(ans1, false, sizeof(ans1));
	memset(ans2, false, sizeof(ans2));
	
	for(ll i=0,j=1; j<n;) {
		if(a[i].first.second >= a[j].first.second) {
			ans1[a[i].second] = true;
			ans2[a[j].second] = true;
			j++;
		}
		else {
			i++;
			j = i+1;
		}
	}
	
	for(ll i=0; i<n; i++) {
		if(ans1[i]) cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<"\n";
	for(ll i=0; i<n; i++) {
		if(ans2[i]) cout<<"1 ";
		else cout<<"0 ";
	}
}
