#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int &i:v) cin >>i;
    map<int,int> upar, st;
    map<int, vector<int>> idx;
    for(int i=0;i<n;i++){
        int num = v[i];
        if(upar[num - 1] != 0 ){
            upar[num] = upar[num - 1];
            if(idx[upar[num]].size() == num - upar[num])idx[upar[num]].push_back(i+1);
        }
        else {
            upar[num] = num;
            if(idx[upar[num]].size()==0) idx[upar[num]].push_back(i+1);
        }
    }
    int stn = 0, maxi = 0;
    for(auto [key, val]:idx){
        if(val.size()>maxi){
            maxi = val.size();
            stn = key;
        }
    }
    cout<<idx[stn].size() << "\n";
    for(int i:idx[stn]) cout<<i<<" ";
    cout<<"\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) 
    solve();
    return 0;
}