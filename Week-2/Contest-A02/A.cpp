#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    vi b(7);
    for (int &x : b) cin >> x;
    int a1 = b[0];
    int a2 = b[1];
    int a3 = b[6] - a1 - a2;
    cout << a1 << " " << a2 << " " << a3 << "\n";
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