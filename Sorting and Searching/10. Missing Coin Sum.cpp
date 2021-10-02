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
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	sort(a, a+n);
	
	ll curr = 1, sum = 0;
	for(ll i=0; i<n; i++) {
		if(sum < curr) {
			if(a[i] <= curr) {
				sum += a[i];
				curr = sum;
			}
			else {
				cout<<curr;
				return 0;
			}
		}
		else {
			sum += a[i];
			curr = sum;
		}
		curr++;
	}
	cout<<sum+1;
}
