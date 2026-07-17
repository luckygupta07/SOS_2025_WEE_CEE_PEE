#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int n;
    cin >> n;
    vi v(n), b(n);
    for(int &i:v) cin >> i;
    for(int &i:b) cin >> i;
    vector<pii> p;
    for(int i=0;i<n;i++) p.push_back({v[i], b[i]});
    sort(all(p));
    vi suff(n+1);
    for(int i=n-1;i>=0;i--){
        suff[i] = suff[i+1] + p[i].second;
    }
    int ans = suff[0];
    for(int i=0;i<n;i++){
        ans = min(ans, max(p[i].first, suff[i+1]));
    }
    return ans;
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