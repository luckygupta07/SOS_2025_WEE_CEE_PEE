#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


int solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int diff = abs(a - b);
    int n = 2*diff;
    if(n < max({a, b, c})) return -1;
    if( c + diff <=n) return c + diff;
    if( c - diff >=1) return c - diff;
    return -1;
    
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