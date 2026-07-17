#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
 
void solve() {
    int n, m;
    cin >> n >> m;
    vi v(n), pre(n+1);
    for(int &i:v) cin >> i;
    for(int i=1;i<=n;i++) pre[i] = v[i-1] + pre[i-1];
    while(m--){
        int l, r;
        cin >> l >> r;
        cout<<pre[r] - pre[l-1]<<"\n";
    }
}
 
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) 
    //cout << solve() << '\n';
    solve();
    return 0;
}
