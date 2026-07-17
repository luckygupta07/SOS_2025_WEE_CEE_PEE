#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

map<int,int> mp;
int offset = 0;

int getValue(int key) {
    return mp[key] + offset;
}

int solve() {
    int n, m;
    cin >> n >> m;
    vi v(n);
    mp.clear();
    offset = 0;
    for(int &i:v) cin >> i;
    for(int &i:v) mp[i]++;
    vi freq(m+n+1);
    for(int i=0;i<m;i++){
        int idx, val;
        cin >> idx >> val;
        idx--;
        freq[v[idx]] += getValue(v[idx]);
        mp.erase(v[idx]);
        offset ++;
        mp[val] = 1 - offset;
        v[idx] = val;
    }
    for(int i=0;i<n;i++) freq[v[i]] += (mp[v[i]] + offset);
    int ans = 0;
    for(int i=1;i<=n+m;i++){
        if(freq[i] == 0) continue;
        int d = freq[i], c = m + 1 - d;
        ans += c * d + d * (d - 1) /2;
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