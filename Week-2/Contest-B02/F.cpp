#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int n, t;
    cin >> n >> t;
    int k;
    cin >> k;
    int l = 1, r = n;
    int ans = n;
    while (l <= r) {
        int m = (l + r) / 2;
        cout << "? 1 "<< m << endl;
        int sum;
        cin >> sum;
        if(m - sum >= k){
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    cout << "! " << ans << endl;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    while (t--) 
    solve();
    return 0;
}