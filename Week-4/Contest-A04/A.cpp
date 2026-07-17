#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


string solve() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    x-= a; y-=b;
    x = max(0LL, x);
    y = max(0LL, y);
    if(x + y <= c) return "YES";
    return "NO";
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