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
    	ll x,y;
    	cin>>x>>y;
    	
    	ll index = max(x, y);
    	
    	ll ans;
    	if(index == y) {
    		if(index%2 == 1) {
    			ans = index*index;
    			ans -= x - 1;
			}
			else {
				ans = (index-1)*(index-1);
				ans += 1;
				ans += x - 1;
			}
		}
		else {
			if(index%2 == 0) {
    			ans = index*index;
    			ans -= y - 1;
			}
			else {
				ans = (index-1)*(index-1);
				ans += 1;
				ans += y - 1;
			}
		}
		
		cout<<ans<<"\n";
	}
}
