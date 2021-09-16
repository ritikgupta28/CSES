#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

int main() {
    fastIO;
    
    string s;
    cin>>s;
    
    ll ans = 1, cnt = 1;
    for(ll i=1; i<s.length(); i++) {
    	if(s[i-1] == s[i]) cnt++;
    	else cnt = 1;
    	
    	ans = max(ans, cnt);
	}
	
	cout<<ans;
}
