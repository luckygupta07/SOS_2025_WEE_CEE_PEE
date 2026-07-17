#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

int maxsub(vi &v, int l, int r){
    int ans = v[l];
    int curr = v[l];
    for(int i=l+1;i<=r;i++){
        curr = max(v[i], curr + v[i]);
        ans = max(ans, curr);
    }
    return ans;
}

string solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int &i:v) cin >> i;
    if(v[0]<=0 || v[n-1] <= 0) return "NO";
    int tot = accumulate(all(v), 0LL);
    int a1 = maxsub(v, 0, n-2);
    int a2 = maxsub(v, 1, n-1);
    if(a1 >= tot || a2 >= tot) return "NO";
    return "YES";
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