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
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	vector<pair<ll, pll>> temp;
	for(ll i=0; i<n; i++) {
		for(ll j=i+1; j<n; j++) {
			temp.push_back({a[i]+a[j], {i, j}});
		}
	}
	
	sort(temp.begin(), temp.end());
	
	ll i = 0, j = temp.size()-1;
	while(i < j) {
		ll sum = temp[i].first + temp[j].first;
		ll index1 = temp[i].second.first, index2 = temp[i].second.second, index3 = temp[j].second.first, index4 = temp[j].second.second;
		if(sum == x && index1 != index3 && index1 != index4 && index2 != index3 && index2 != index4) {
			vector<ll> ans = {index1, index2, index3, index4};
			sort(ans.begin(), ans.end());
			cout<<ans[0]+1<<" "<<ans[1]+1<<" "<<ans[2]+1<<" "<<ans[3]+1;
			return 0;
		}
		else if(sum < x) {
			i++;
		}
		else {
			j--;
		}
	}
	
	cout<<"IMPOSSIBLE";
}
