#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


int solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int &i:v) cin >> i;
    
    priority_queue<int, vi, greater<>> pq;
    int ans = 0, curh = 0;
    for(int i=0;i<n;i++){
        curh += v[i];
        pq.push(v[i]);
        ans++;
        if (curh < 0) {
            curh -= pq.top();
            pq.pop();
            ans--;
        }
    }
    return ans;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    while (t--) 
    cout << solve() << '\n';
    return 0;
}