#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


void solve() {
    int n;
    cin >> n;
    vi v(n);
    vector<string> ans;
    for(int &i:v) cin >> i;
    for(int i=n-1;i>0;i--){
        int mxi = max_element(v.begin(), v.begin() + i + 1) - v.begin();
        if(mxi == i) continue;
        rotate(v.begin() + mxi, v.begin() + mxi + 1, v.begin() + i + 1);
        //cout<< mxi + 1<< " " << i + 1 <<" 1\n";
        ans.push_back(to_string(mxi + 1)+" "+to_string(i + 1)+" 1");
    }
    int sz = ans.size();
    cout<<sz<<"\n";
    for(int i=0;i<sz;i++){
        cout<<ans[i]<<"\n";
    }
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