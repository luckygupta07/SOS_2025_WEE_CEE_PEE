#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if(k>3) return 0;
    if(k==1) return 1;
    if(k==2){
        if(m<=n) return m;
        return n + (m/n - 1);
    }
    if(m<=n) return 0;
    return (m - n) - (m - n)/n;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--) 
    cout << solve() << '\n';
    return 0;
}