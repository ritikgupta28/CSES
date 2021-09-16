#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

bool visited[8][8];

int helper(string s, int index, int i, int j) {
	if(index == s.length() && i == 7 && j == 1) return 1;
	else if(index == s.length() || i < 1 || i > 7 || j < 1 || j > 7 || (i == 7 && j == 1) || visited[i][j]) return 0;
	
	visited[i][j] = true;
	
	int cnt = 0;
	if(s[index] == '?') {
		cnt = helper(s, index+1, i-1, j) + helper(s, index+1, i, j-1) + helper(s, index+1, i, j+1) + helper(s, index+1, i+1, j);
	}
	else if(s[index] == 'U') {
		cnt = helper(s, index+1, i-1, j);
	}
	else if(s[index] == 'L') {
		cnt = helper(s, index+1, i, j-1);
	}
	else if(s[index] == 'R') {
		cnt = helper(s, index+1, i, j+1);
	}
	else {
		cnt = helper(s, index+1, i+1, j);
	}
	
	visited[i][j] = false;
	
	return cnt;
}

int main() {
    fastIO;
    
    string s;
    cin>>s;
    
    memset(visited, false, sizeof(visited));
    
    cout<<helper(s, 0, 1, 1);
}
