#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


int solve() {
    int n, k;
    cin >> n >> k;
    if(n<=2) return n -1;
    n--;
    int ans = 0;
    int cur = 1;

    while(cur < k && n > 0){
        n -= cur;
        cur *= 2;
        ans++;
    }
    if(n<0) return ans;
    int  rem = n/k;
    if(n%k!=0) rem ++;
    return ans + rem;
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