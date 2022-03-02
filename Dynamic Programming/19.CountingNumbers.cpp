#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

ll cntIntegers(string &s, string temp) {
    ll ans = 0;
    for(char j='0'; j<='9'; j++) {
        if(temp == "" && j == '0') continue;
        else if(temp.length() > 0 && temp[temp.length()-1] == j) continue;

        temp.push_back(j);

        if(temp.length() < s.length()) {
            ans += 1 + cntIntegers(s, temp);
        }
        else if(temp.length() == s.length() && temp <= s) {
            ans += 1 + cntIntegers(s, temp);
        }
        
        temp.pop_back();
    }

    return ans;
}

ll solve(ll x) {
    string s = to_string(x);

    ll cnt = cntIntegers(s, "");

    return cnt;
}

bool is(ll x) {
    string s = to_string(x);

    for(ll i=1; i<s.length(); i++) {
        if(s[i] == s[i-1]) return false;
    }

    return true;
}

void helper() {
    ll a,b;
    cin>>a>>b;

    ll cntA = solve(a);
    ll cntB = solve(b);
    
    ll ans = cntB - cntA;

    if(is(a)) ans++;

    cout<<ans;
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}