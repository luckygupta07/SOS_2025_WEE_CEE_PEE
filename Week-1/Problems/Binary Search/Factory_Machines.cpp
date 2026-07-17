#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
 
bool valid(int m, vi &v, int p){
    int curp = 0;
    for(int i:v){
        curp += m/i;
        if(curp>=p) return true;
    }
    return false;
}
 
int solve() {
    int n, p;
    cin >> n >> p;
    vi v(n);
    for(int &i:v) cin >> i;
    int hi = p * (*min_element(all(v)));
    int lo = 1;
    int ans = hi;
    while(lo<=hi){
        int m = (lo + hi)/2;
        if(valid(m, v, p)){
            ans = m;
            hi = m - 1;
        }
        else lo = m + 1;
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