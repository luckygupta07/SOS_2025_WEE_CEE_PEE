#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;
    int x = 0, y = 0, pos = 1;
    bool f = false;
    while(n > 0) {
        int d = n % 10;
        n /= 10;
        if(d % 2 == 0) {
            x += (d/2) * pos;
            y += (d/2) * pos;
        } 
        else {
            if(f) {
                x += (d/2) * pos;
                y += (d/2 + 1) * pos;
            } 
            else {
                x += (d/2 + 1) * pos;
                y += (d/2) * pos;
            }
            f = !f;
        }
        pos *= 10;
    }
    cout << x << " " << y << "\n";
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