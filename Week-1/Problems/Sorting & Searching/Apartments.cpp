#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
 
int solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vi apar(n), room(m);
    for(int &i:apar) cin >> i;
    for(int &i:room) cin >> i;
    sort(all(apar));
    sort(all(room));
    int per=0, rm=0, ans=0;
    while(per < n && rm < m){
        if(abs(apar[per] - room[rm])<=k){
            ans++;
            per++; rm++;
        }
        else if(apar[per] > room[rm]) rm++;
        else per++;
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