#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


void solve() {
    int n, m;
    cin >> n >> m;
    string s; cin >> s;
    vi v(n + 1);
    while(m--){
        int idx; cin >> idx;
        idx--;
        v[0]++;
        v[idx + 1] --;
    }
    for(int i=1;i<n;i++) v[i] += v[i-1];
    vi ans(26);
    for(int i=0;i<n;i++){
        ans[s[i]-'a'] += v[i] + 1;
    }
    for(int i:ans) cout << i<<" ";
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