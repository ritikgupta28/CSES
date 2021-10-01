#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    
    set<ll> a;
    for(ll i=0; i<n; i++) {
    	a.insert(i+1);
	}
	
	auto it = a.begin();
	while(a.size() > 1) {
		it++;
		if(it == a.end()) it = a.begin();
		
		cout<<*it<<" ";
		auto it1 = it;
		it1++;
		a.erase(it);
		
		if(it1 == a.end()) it = a.begin();
		else it = it1;
	}
	
	if(a.size() == 1) {
		it = a.begin();
		cout<<*it;
	}
}
