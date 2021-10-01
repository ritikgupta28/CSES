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
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	sort(a, a+n);
	
	ll sum = 0, maxi = a[n-1];
	for(ll i=0; i<n-1; i++) {
		sum += a[i];
	}
	
	if(maxi > sum) cout<<2*maxi;
	else cout<<sum+maxi;
}
