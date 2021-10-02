#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

bool isValid(char c[8][8], int x, int y) {
	if(c[x][y] == '*') return false;
	
	for(int i=0; i<8; i++) {
		if(c[i][y] == '#') return false;
		if(c[x][i] == '#') return false;
	}
	
	for(int i=x-1,j=y-1; i>=0 && j>=0; i--,j--) {
		if(c[i][j] == '#') return false;
	}
	for(int i=x-1,j=y+1; i>=0 && j<8; i--,j++) {
		if(c[i][j] == '#') return false;
	}
	for(int i=x+1,j=y-1; i<8 && j>=0; i++,j--) {
		if(c[i][j] == '#') return false;
	}
	for(int i=x+1,j=y+1; i<8 && j<8; i++,j++) {
		if(c[i][j] == '#') return false;
	}
	
	return true;
}

void helper(char c[8][8], int i, ll &ans) {
	if(i == 8) {
		ans++;
		return;
	}
	
	for(int j=0; j<8; j++) {
		if(isValid(c, i, j)) {
			c[i][j] = '#';
			helper(c, i+1, ans);
			c[i][j] = '.';
		}
	}
}

int main() {
    fastIO;
    
    char c[8][8];
    for(int i=0; i<8; i++) {
    	for(int j=0; j<8; j++) {
    		cin>>c[i][j];
		}
	}
	
	ll ans = 0;
	helper(c, 0, ans);
	
	cout<<ans;
}
