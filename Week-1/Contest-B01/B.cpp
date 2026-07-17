#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


int solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int &i:v) cin >> i;
    int ans = 0, pre=0;
    for(int i=n-1;i>=0;i--){
        if(v[i] + pre > 0){
            ans += v[i] + pre;
            pre = 0;
        }
        else pre += v[i];
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