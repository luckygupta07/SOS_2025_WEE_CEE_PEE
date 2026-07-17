#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

int n, m;
vector<vi> adj;
vi vis;

void solve() {
    cin >> n >> m;
    adj.assign(n+1, {});
    vis.assign(n+1, 0);
    vi indeg(n+1, 0);
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
        indeg[u]++; indeg[v]++;
    }
    int l3 = -1;
    for(int i=1;i<=n;i++){
        if(indeg[i] == 1){
            l3 = i;
            break;
        }
    }
    int l2 = adj[l3][0];
    int l1 = -1;
    for(int v:adj[l2]){
        if(indeg[v] != 1){
            l1 = v;
            break;
        }
    }
    cout<< indeg[l1] << " " << indeg[l2] - 1 << "\n";
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