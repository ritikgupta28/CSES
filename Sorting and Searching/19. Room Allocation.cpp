#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    pair<pll, ll> a[n];
    set<ll> st;
    for(ll i=0; i<n; i++) {
    	cin>>a[i].first.first>>a[i].first.second;
    	a[i].second = i;
    	st.insert(i+1);
    }
	
	sort(a, a+n);
	
	ll ans = 0;
	vector<ll> pos(n);
	priority_queue<pll, vector<pll>, greater<pll>> pq;
	for(ll i=0; i<n; i++) {
		ll arrival = a[i].first.first, departure = a[i].first.second;
		while(!pq.empty() && (pq.top()).first < arrival) {
			st.insert((pq.top()).second);
			pq.pop();
		}
		
		ll curr = *st.begin();
		st.erase(curr);
		pos[a[i].second] = curr;
		pq.push({departure, curr});
		ans = max(ans, curr);
	}
	
	cout<<ans<<"\n";
	for(ll i=0; i<n; i++) {
		cout<<pos[i]<<" ";
	}
}
