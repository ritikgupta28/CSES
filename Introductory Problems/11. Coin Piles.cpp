#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    int t;
    cin>>t;
    while(t--) {
    	ll a,b;
    	cin>>a>>b;
    	
    	while(a > 0 && b > 0 && a%3 != 0 && b%3 != 0) {
    		if(a > b) {
    			a -= 2;
    			b -= 1;
			}
			else {
				b -= 2;
				a -= 1;
			}
		}
		
		if((a%3) == 0 && (b%3) == 0) {
			if(a == b) {
				cout<<"YES\n";
			}
			else {
				if(abs(a-b) <= min(a, b)) cout<<"YES\n";
				else cout<<"NO\n";
			}
		}
		else {
			cout<<"NO\n";
		}
	}
}
