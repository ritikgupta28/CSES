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
    int h[26] = {0};
    for(int i=0; i<s.length(); i++) {
    	h[s[i] - 'A']++;
	}
	
	bool flag = true;
	int index = -1;
	for(int i=0; i<26; i++) {
		if(h[i]%2 != 0) {
			if(flag) {
				flag = false;
				index = i;
			}
			else {
				cout<<"NO SOLUTION\n";
				return 0;
			}
		}
	}
	
	if(index != -1) {
		s[s.length()/2] = index + 'A';
		h[index]--;
	}
	
	for(int i=0,j=0; i<s.length()/2;) {
		while(j < 26 && h[j] == 0) {
			j++;
		}
		
		
		while(j < 26 && h[j] > 0) {
			s[i] = j + 'A';
			s[s.length()-i-1] = j + 'A';
			i++;
			h[j] -= 2;
		}
	}
	
	cout<<s;
}
