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
    vector<ll> a;
    for(ll i=0; i<n; i++) {
    	int x;
		cin>>x;
		int index = upper_bound(a.begin(), a.end(), x) - a.begin();
		
		if(index == a.size()) a.push_back(x);
		else a[index] = x;
	}
	
	cout<<a.size();
}
