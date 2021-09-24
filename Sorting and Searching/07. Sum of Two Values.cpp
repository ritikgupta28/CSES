#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	unordered_map<ll, ll> ourmap;
	for(ll i=0; i<n; i++) {
		if(ourmap.count(x-a[i]) > 0) {
			cout<<ourmap[x-a[i]]+1<<" "<<i+1;
			return 0;
		}
		else {
			ourmap[a[i]] = i;
		}
	}
	
	cout<<"IMPOSSIBLE";
}
