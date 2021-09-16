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
    
    ll sum = n*(n+1)/2;
    
    if(sum%2 == 0) {
    	sum /= 2;
    	ll cnt = 0;
    	vector<bool> ans(n+1, false);
    	for(ll i=n; i>=1; i--) {
    		if(sum >= i) {
    			cnt++;
    			ans[i] = true;
    			sum -= i;
			}
		}
		
		cout<<"YES\n"<<cnt<<"\n";
		for(ll i=1; i<=n; i++) {
			if(ans[i]) cout<<i<<" ";
		}
		cout<<"\n"<<n-cnt<<"\n";
		for(ll i=1; i<=n; i++) {
			if(!ans[i]) cout<<i<<" ";
		}
		cout<<"\n";
	}
	else {
		cout<<"NO\n";
	}
}
