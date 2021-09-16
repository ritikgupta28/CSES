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

    cout<<n<<" ";
    while(n != 1) {
        if(n%2 == 0) n /= 2;
        else n = (n*3) + 1;
        cout<<n<<" ";
    }
}