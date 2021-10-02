#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for(ll i=0; i<k-1; i++) {
		pq.push(a[i]);
	}
}
