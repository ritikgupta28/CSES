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
    
    if(n == 2 || n == 3) {
    	cout<<"NO SOLUTION";
    	return 0;
	}
	
    for(ll i=2; i<=n; i+=2) {
    	cout<<i<<" ";
	}
	for(ll i=1; i<=n; i+=2) {
    	cout<<i<<" ";
	}
}
