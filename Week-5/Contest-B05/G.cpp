    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define vi vector<int>
    #define pii pair<int, int>
    #define all(x) x.begin(), x.end()

    int n;
    vi a, subtreesum, dp;
    vector<vi> adj;

    int dfs1(int u, int par){
        int res = 0;
        for(int v:adj[u]){
            if(v == par) continue;
            res += dfs1(v, u);
        }
        return subtreesum[u] = res + a[u];
    }

    void dp1(){
        int res = 0, lvl = 0;
        queue<int> q;
        q.push(1);
        vi vis(n+1);
        vis[1] = 1;
        while(!q.empty()){
            int sz = q.size();
            for(int i=0;i<sz;i++){
                int x = q.front();
                q.pop();
                res += lvl * a[x];
                for(int v:adj[x]){
                    if(!vis[v]){
                        q.push(v);
                        vis[v] = 1;
                    }
                }
            }
            lvl++;
        }
        dp[1] = res;
    }



    int solve() {
        // int n;
        cin >> n;
        a.assign(n+1, 0);
        subtreesum.assign(n+1, 0);
        dp.assign(n+1, 0);
        adj.assign(n+1,{});
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        int tot = 0;
        for(int i=1; i<=n; i++) tot += a[i];
        dfs1(1, -1);
        dp1();
        queue<int> q;
        q.push(1);
        vi vis(n+1);
        vis[1] = 1;
        int maxi = dp[1];
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(int v:adj[x]){
                if(vis[v]) continue;
                vis[v] = 1;
                q.push(v);
                dp[v] = dp[x] + tot - 2*subtreesum[v];
                maxi = max(maxi, dp[v]);
            }
        }
        return maxi;
    }


    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t=1;
        // cin >> t;
        while (t--) 
        cout << solve() << '\n';
        return 0;
    }