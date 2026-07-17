#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int n, m;
    cin >> n >> m;
    vi a(n),b(n);
    for(int &i:a) cin >> i;
    for(int &i:b) cin >> i;
    multiset<int> mb(all(b));
    int ans = INT_MAX;
    for(int j=0;j<n;j++){
        int x = (b[j]-a[0]+m)%m;
        multiset<int> temp;
        for(int i=0;i<n;i++){
            temp.insert((a[i]+x)%m);
        }
        if(mb == temp) ans = min(ans, x);
    }
    return ans;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) 
    cout << solve() << '\n';
    return 0;
}