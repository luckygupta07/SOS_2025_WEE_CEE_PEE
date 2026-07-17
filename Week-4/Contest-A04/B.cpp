#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


string solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int &i:v) cin >> i;
    vector<int> lc(23);
    lc[1] = 1;
    for (int i = 2; i <= 22; i++) lc[i] = lcm(lc[i-1], i);
    for (int i = 1; i <= min(n, 21LL); i++) {
        if (v[i-1] % lc[i+1] == 0) return "NO";
    }
    return "YES";
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