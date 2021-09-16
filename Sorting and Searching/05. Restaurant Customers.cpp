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
    ll a[n], d[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i]>>d[i];
	}
	
	sort(a, a+n);
	sort(d, d+n);
	
	ll ans = 0, cnt = 0, currTime = 0;
	for(ll i=0,j=0; i<n;) {
		currTime = a[i];
		
		while(currTime >= d[j]) {
			cnt--;
			j++;
		}
		
		while(currTime >= a[i]) {
			cnt++;
			i++;
		}
		
		ans = max(ans, cnt);
	}
	
	cout<<ans;
}
