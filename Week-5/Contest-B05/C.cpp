#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int n, p;
    cin >> n >> p;
    int tote = 2*n + p;
    int each1 = tote * 2 / n;
    int extra = (tote * 2) % n;   
    vi deg(n+1, each1);
    int dup = extra;
    vector<vi> ans;
    for(int i=1;i<=n && dup > 0;i++){
        deg[i]++;
        dup--;
    }
    for(int i=1;i<=n && tote > 0;i++){
        for(int j=i+1;j<=n && tote > 0;j++){
            ans.push_back({i, j});
            tote--;
        }
    }


    for(auto &vec:ans){
        cout << vec[0] << " " << vec[1] <<"\n";
    }
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
