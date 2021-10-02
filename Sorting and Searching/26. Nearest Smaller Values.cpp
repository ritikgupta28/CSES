#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) {
    	cin>>a[i];
	}
	
	stack<ll> st;
	for(ll i=0; i<n; i++) {
		while(!st.empty() && a[st.top()] >= a[i]) {
			st.pop();
		}
		
		if(st.empty()) cout<<"0 ";
		else cout<<(st.top())+1<<" ";
		
		st.push(i);
	}
}
