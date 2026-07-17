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
    vi pre(n);
    pre[0] = v[0];
    for(int i=1;i<n;i++) pre[i] = pre[i-1] + v[i];
    map<int,int> mp;
    int ans = 0;
    int st = 0;
    while(st < n && v[st]!=0) { if(pre[st] == 0) ans++; st++;}
    for(int i=st;i<n;i++){
        if(v[i] == 0){
            int maxi = 0;
            for(auto&[key, val] : mp){
                maxi = max(maxi, val);
            }
            ans += maxi;
            mp.clear();
        }
        mp[pre[i]]++;
    }
    int maxi = 0;
    for(auto&[key, val] : mp){
        maxi = max(maxi, val);
    }
    ans += maxi;
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