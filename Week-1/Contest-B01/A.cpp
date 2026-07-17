#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


void solve() {
    int n, k;
    cin >> n >> k;
    vi v(n);
    for(int &i:v) cin >> i;
    for(int i=0;i<n-1 && k > 0;i++){
        if(v[i] > 0){
            int maxi = min(v[i], k);
            v[i] -= maxi;
            k-=maxi;
            v[n-1] += maxi;
        }
    }
    for(int i:v) cout<<i<<" ";
    cout<<"\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--) 
    solve();
    return 0;
}