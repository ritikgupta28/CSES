#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

ll power(ll x, ll y, ll m) {
	ll ans = 1;
	while(y) {
		if(y%2 == 1) ans = (ans*x)%m;
		
		y /= 2;
		x = (x*x)%m;
	}
	
	return ans;
}

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    
    ll ans = power(2, n, 1000000007);
    
    cout<<ans;
}
