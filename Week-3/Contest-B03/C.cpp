#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int n;
    cin >> n;
    vector<vi> v(n);
    for(int i=0;i<n;i++){
        int m; cin >> m;
        while(m--){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    map<int, pii> mp;
    for(int i=0;i<n;i++){
        int tot = 0;
        for(int num:v[i]) tot += num;
        int  sz = v[i].size();
        for(int j=0;j<sz;j++){
            int lef = tot - v[i][j];
            if(mp.find(lef)!=mp.end() && mp[lef].first != i+1){
                cout<<"YES\n";
                cout << mp[lef].first << " " << mp[lef].second <<"\n";
                cout << i+1 << " " << j + 1 << "\n";
                return;
            }
            mp[lef] = {i+1, j+1};
        }
    }
    cout <<"NO\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) 
    solve();
    return 0;
}