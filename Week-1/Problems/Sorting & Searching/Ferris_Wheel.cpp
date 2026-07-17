#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
 
 
int solve() {
    int n, x;
    cin >> n >> x;
    vi v(n);
    for(int &i:v) cin >> i;
    sort(v.begin(), v.end());
    int ans = 0;
    int l=0, r=n-1;
    while(l<r){
        if(v[l] + v[r] <= x){
            ans++;
            l++; r--;
        }
        else{
            ans++;
            r--;
        }
    }
    if(l==r) ans++;
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