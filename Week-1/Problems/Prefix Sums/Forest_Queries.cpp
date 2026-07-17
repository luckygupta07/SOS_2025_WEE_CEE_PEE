#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
 
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vi> v(n, vi(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c; cin >> c;
            if(c=='*') v[i][j] = 1;
        }
    }
    vector<vi> pre(n+1, vi(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            pre[i][j] = v[i-1][j-1] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }
    while(m--){
        int y1, x1, y2, x2;
        cin >> y1 >> x1;
        cin >> y2 >> x2;
        cout<< pre[y2][x2] - pre[y1 - 1][x2] - pre[y2][x1 - 1] + pre[y1-1][x1-1]<<"\n";
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