#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int x, y, k;
    cin >> x >> y >> k;
    int ext = k * (y + 1) - 1; 
    int tr = (ext + (x - 2)) / (x - 1);
    return tr + k;
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