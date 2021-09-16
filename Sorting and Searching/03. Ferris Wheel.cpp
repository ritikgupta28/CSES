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
    ll p[n];
    for(ll i=0; i<n; i++) {
    	cin>>p[i];
	}
	
	sort(p, p+n);
	
	ll ans = 0;
	for(ll i=0,j=n-1; i<=j;) {
		if(p[i] + p[j] <= x) {
			ans++;
			i++;
			j--;
		}
		else {
			ans++;
			j--;
		}
	}
	
	cout<<ans;
}
