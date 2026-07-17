#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


int solve() {
    int n;
    cin >> n;
    vi v(n), dp(n+1);
    for(int &i:v) cin >> i;
    for(int i=n-2;i>=0;i--){
        dp[i] = dp[i+1];
        if(i + v[i] + 1 <= n){
            dp[i] = max(dp[i], v[i]+1+dp[i + v[i] + 1]);
        }
    }
    return n - dp[0];
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