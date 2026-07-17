#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int tot = (a+c-1)/c + (b+d-1)/d;
    if(tot > k){
        cout<<"-1\n";
        return;
    }
    cout << (a+c-1)/c << " " << (b+d-1)/d << " \n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--) 
    //cout << solve() << '\n';
    solve();
    return 0;
}