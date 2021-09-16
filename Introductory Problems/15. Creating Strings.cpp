#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

void helper(string s, int i, set<string> &ans) {
	if(i == s.length()) {
		ans.insert(s);
		return;
	}
	
	for(int j=i; j<s.length(); j++) {
		swap(s[i], s[j]);
		helper(s, i+1, ans);
		swap(s[i], s[j]);
	}
}

int main() {
    fastIO;
    
    string s;
    cin>>s;
    
    set<string> ans;
    
    helper(s, 0, ans);
    
    cout<<ans.size()<<"\n";
    for(auto it : ans) {
    	cout<<it<<"\n";
	}
}
