#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

void helper(ll p[], ll n, ll sum, ll i, ll curr, ll &ans) {
	if(i == n) {
		ans = min(ans, abs(curr - (sum - curr)));
		return;
	}
	
	helper(p, n, sum, i+1, curr+p[i], ans);
	helper(p, n, sum, i+1, curr, ans);
}

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    ll p[n];
    ll sum = 0;
    for(ll i=0; i<n; i++) {
    	cin>>p[i];
    	sum += p[i];
	}
	
	ll ans = sum;
	
	helper(p, n, sum, 0, 0, ans);
	
	cout<<ans;
}
