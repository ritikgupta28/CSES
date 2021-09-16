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
    
    vector<string> ans;
	ans.push_back("0");
	ans.push_back("1");
    for(ll i=2; i<=n; i++) {
    	for(ll j=ans.size()-1; j>=0; j--) {
    		string s = "0" + ans[j];
    		ans[j] = s;
    		s[0] = '1';
    		ans.push_back(s);
		}
	}
	
	for(ll i=0; i<ans.size(); i++) {
		cout<<ans[i]<<"\n";
	}
}
