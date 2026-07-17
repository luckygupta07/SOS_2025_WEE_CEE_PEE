#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int t, n;
    cin >> t >> n;
    vi v(n);
    for(int &i:v) cin >> i;
    int maxi = *max_element(all(v));
    int sum = 0;
    for(int i:v) sum += i;
    return 2*(sum - maxi) - (n-1);
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