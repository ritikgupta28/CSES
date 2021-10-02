#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n,x;
    cin>>n>>x;
    pll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i].first;
    	a[i].second = i;
	}
	
	sort(a, a+n);
	
	for(ll i=0; i<n; i++) {
		ll j = i+1, k = n-1;
		while(j < k) {
			ll sum = a[i].first + a[j].first + a[k].first;
			
			if(sum == x) {
				vector<ll> ans = {a[i].second, a[j].second, a[k].second};
				sort(ans.begin(), ans.end());
				cout<<ans[0]+1<<" "<<ans[1]+1<<" "<<ans[2]+1;
				return 0;
			}
			else if(sum > x) {
				k--;
			}
			else {
				j++;
			}
		}
	}
	
	cout<<"IMPOSSIBLE";
}
