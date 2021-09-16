#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii pair<int, int>

void towerOfHanoi(ll n, char from_rod, char to_rod, char aux_rod, ll &ans) {
	if(n == 1) {
//		cout<<"Move disk 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl;
		ans++;
		return;
	}
	
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod, ans);
//    cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod, ans);
}

int main() {
    fastIO;
    
    ll n;
    cin>>n;
    
    ll ans = 0;
    
    towerOfHanoi(n, 'A', 'B', 'C', ans);
    
    cout<<ans;
}
