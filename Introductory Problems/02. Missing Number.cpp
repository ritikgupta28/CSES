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
    ll sum = 0;
    for(ll i=0; i<n-1; i++) {
    	ll x;
    	cin>>x;
    	sum += x;
	}
	
	cout<<n*(n+1)/2 - sum;
}
