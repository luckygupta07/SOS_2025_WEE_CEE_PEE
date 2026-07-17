#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int n, m;
    cin >> n >> m;
    vi v(n);
    for(int &i:v) cin >> i;
    sort(all(v));
    map<string, int> mp;
    for(int i=0;i<m;i++){
        string fru;
        cin >> fru;
        mp[fru] ++;
    }
    vi freq;
    for(auto [key, val]: mp) freq.push_back(val);
    sort(all(freq));
    int mini = 0, maxi = 0;
    //mini
    int i = 0;
    int totd = freq.size();
    for(int j=totd -1;j>=0;j--){
        mini += freq[j]*v[i++];
    }
    i = n - 1;
    for(int j=totd -1;j>=0;j--){
        maxi += freq[j]*v[i--];
    }
    cout<<mini<<" "<<maxi<<"\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) 
    //cout << solve() << '\n';
    solve();
    return 0;
}