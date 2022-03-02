#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

class Project {
    public:
    ll start, end, reward;
};

bool comp(Project &a, Project &b) {
    if(a.end == b.end) return a.start < b.start;

    return a.end < b.end;
}

ll findIndex(Project p[], ll i) {
    // ll j = i-1;
    // while(j >= 0) {
    //     if(p[j].end < p[i].start) break;
    //     j--;
    // }

    // return j;

    ll l = 0, r = i-1, j = -1;
    while(l <= r) {
        ll mid = (l+r)/2;
        if(p[mid].end < p[i].start) {
            l = mid+1;
            j = mid;
        }
        else {
            r = mid-1;
        }
    }

    return j;
}

void helper() {
    ll n;
    cin>>n;
    Project p[n];
    for(ll i=0; i<n; i++) {
        cin>>p[i].start>>p[i].end>>p[i].reward;
    }

    sort(p, p+n, comp);

    ll dp[n] = {0};
    dp[0] = p[0].reward;
    for(ll i=1; i<n; i++) {
        ll j = findIndex(p, i);

        if(j != -1) {
            dp[i] = max(dp[i-1], p[i].reward + dp[j]);
        }
        else {
            dp[i] = max(dp[i-1], p[i].reward);
        }
    }

    cout<<dp[n-1];
}

int main() {
    fastIO;
    
    int t = 1;
    // cin>>t;
    for(int i=1; i<=t; i++) {
        helper();
    }
}