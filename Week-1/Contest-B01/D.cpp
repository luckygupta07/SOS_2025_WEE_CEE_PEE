#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


void solve() {
    int n;
    cin >> n;
    vi a, b;
    for(int i=0;i<2*n;i++){
        int x, y;
        cin >> x >> y;
        if(x==0) a.push_back(abs(y));
        else b.push_back(abs(x));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long double ans = 0;
    for(int i=0;i<n;i++) ans += sqrt(1.0L*a[i]*a[i] + 1.0L*b[i]*b[i]);
    cout<< fixed << setprecision(15) << ans;
    cout<<"\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--) 
    solve();
    return 0;
}