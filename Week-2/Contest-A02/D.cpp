#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>

void solve() {
    int n;
    cin >> n;
    vi x(n), t(n);
    for (int &i : x) cin >> i;
    for (int &i : t) cin >> i;

    double lo = 0, hi = 1e9;
    double ans = hi;
    int iterations = 80;

    while (iterations--) {
        double mt = (lo + hi) / 2.0;
        double mxl = -1e18, minr = 1e18;
        for (int i = 0; i < n; i++) {
            double d = max(0.0, mt - t[i]);
            double li = x[i] - d;
            double ri = x[i] + d;
            mxl = max(mxl, li);
            minr = min(minr, ri);
        }
        if (minr >= mxl) {
            ans = mt;
            hi = mt;
        } else {
            lo = mt;
        }
    }

    double mxl = -1e18, minr = 1e18;
    for (int i = 0; i < n; i++) {
        double d = max(0.0, ans - t[i]);
        double li = x[i] - d;
        double ri = x[i] + d;
        mxl = max(mxl, li);
        minr = min(minr, ri);
    }
    double x0 = (mxl + minr) / 2.0;

    cout << fixed << setprecision(10) << x0<< "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
