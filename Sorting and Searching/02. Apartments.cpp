#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n], b[m];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	for(ll i=0; i<m; i++) {
		cin>>b[i];
	}
	
	sort(a, a+n);
	sort(b, b+m);
	
	ll ans = 0;
	for(ll i=0,j=0; i<n && j<m;) {
		if(a[i] >= b[j]-k && a[i] <= b[j]+k) {
			ans++;
			i++;
			j++;
		}
		else if(a[i] < b[j]-k) {
			i++;
		}
		else {
			j++;
		}
	}
	
	cout<<ans;
}
