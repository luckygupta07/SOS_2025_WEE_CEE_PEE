#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int n;
    cin >> n;
    vector<pii> v(n);

    for (int i = 0; i < n; i++) cin >> v[i].first;
    for (int i = 0; i < n; i++) cin >> v[i].second;
    int ra = 0, rb = 0, bp = 0, bn = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].first == 1 && v[i].second == 1) bp++;
        else if (v[i].first == -1 && v[i].second == -1) bn++;
        else if (v[i].first > v[i].second) ra += v[i].first;
        else if (v[i].second > v[i].first) rb += v[i].second;
    }

    while (bp--) {
        if (ra < rb) ra++;
        else rb++;
    }

    while (bn--) {
        if (ra > rb) ra--;
        else rb--;
    }
    return min(ra, rb);
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

