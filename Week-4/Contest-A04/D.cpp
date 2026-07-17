
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
 
int n, m;
 
bool check(string &ans, vector<string> &v){
 
    for(int i=0;i<n;i++){
        int diff = 0;
        for(int j=0;j<m;j++){
            if(ans[j] != v[i][j]) diff++;
            if(diff > 1) return false;
        }
    }
    return true;
}
 
 
string solve() {
    cin >> n >> m;
    vector<string> v(n);
    for(auto &i: v) cin >> i;
    string ans = v[0];
 
    for(int j=0;j<m;j++){
        char dup = ans[j];
        for(int ch = 0;ch<26;ch++){
            ans[j] = ('a' + ch);
            if (check(ans, v)) return ans;
        }
        ans[j] = dup;
    }
    return "-1";
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