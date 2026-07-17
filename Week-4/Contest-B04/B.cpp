#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int n, m;
    cin >> n >> m;
    // vi v(n);
    // for(int &i:v) cin >> i;
    vector<vi> gr(n, vi(m)), ans(n, vi(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin >> gr[i][j];
    }
    //u
    for(int j=0;j<m;j++){
        bool found = false;
        for(int i=n-1;i>=0;i--){
            if(gr[i][j] == 1) found = true;
            if(found) ans[i][j]++;
        }
    }
    //d
    for(int j=0;j<m;j++){
        bool found = false;
        for(int i=0;i<n;i++){
            if(gr[i][j] == 1) found = true;
            if(found) ans[i][j]++;
        }
    }
    //r
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=m-1;j>=0;j--){
            if(gr[i][j] == 1) found = true;
            if(found) ans[i][j]++;
        }
    }
    //u
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<m;j++){
            if(gr[i][j] == 1) found = true;
            if(found) ans[i][j]++;
        }
    }
    int tot = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            if(gr[i][j] == 0) tot += ans[i][j];
        }
    }
    return tot;
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