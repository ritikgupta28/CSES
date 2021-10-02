#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    ll n,a,b;
    cin>>n>>a>>b;
    ll x[n];
    for(ll i=0; i<n; i++) {
    	cin>>x[i];
	}
	
    ll ans = INT_MIN, sum = 0;
	for(ll i=0,j=0; j<n;) {
		sum += x[j++];
		if(j-i < a) continue;
		else if(j-i > b) sum -= x[i++];
		
		ans = max(ans, sum);
		while(sum < 0 && j-i >= a) {
			sum -= x[i++];
	 		if(j-i >= a) ans = max(ans, sum);
	 	}
	 	
	 	while(j == n && j-i >= a) {
			sum -= x[i++];
	 		if(j-i >= a) ans = max(ans, sum);
	 	}
	}
	
	cout<<ans;
}
