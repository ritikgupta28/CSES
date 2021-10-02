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
	
	map<ll, ll> ourmap;
	ll ans = 0, cnt = 0;
	ll i = 0, j = 0;
	while(j < n) {
		if(ourmap.count(a[j]) > 0) {
			ourmap[a[j]]++;
			j++;
		}
		else if(cnt == k) {
			while(cnt == k) {
				if(ourmap[a[i]] == 1) {
					ourmap.erase(a[i]);
					cnt--;
				}
				else {
					ourmap[a[i]]--;
				}
				ans += j-i;
				i++;
			}
		}
		else {
			ourmap[a[j]]++;
			j++;
			cnt++;
		}
	}
	
	ans += (j-i)*(j-i+1)/2;
	
	cout<<ans;
}
