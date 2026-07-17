#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

int n, m;
vector<vi> adj;
vi leaves;

int dfs(int u, int par){
    int res = 0;
    for(int v:adj[u]){
        if(v != par){
            if(leaves[v] == 0) res += dfs(v, u);
        }
    }
    if(res == 0) return leaves[u] = 1;
    return leaves[u] = res;
}

void solve() {
    int n;
    cin >> n;
    adj.assign(n+1, {});
    leaves.assign(n+1, 0);
    for(int i=0;i<n-1;i++){
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    dfs(1, -1);
    int q; cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        cout << leaves[x]*leaves[y] << "\n";
    }
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--) 
    // cout << solve() << '\n';
    solve();
    return 0;
}