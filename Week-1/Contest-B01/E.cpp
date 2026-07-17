#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>


string solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int &i:v) cin >> i;
    if(n==1) return "Yes";
    if(n==2){
        if(v[1]==0 && v[0]==0) return "No";
        return "Yes";
    }
    for(int i=1;i<n-1;i++) if(v[i]==0) return "No";
    if(n&1){
        for(int i=0;i<n/2;i++){
            if(v[i]<i) return "No";
        }
        for(int i=n/2;i<n;i++){
            if(v[i]< (n-1-i)) return "No";
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            if(v[i]<i) return "No";
        }
        for(int i=n/2;i<n;i++){
            if(v[i]< (n-1-i)) return "No";
        }
        if((v[n/2] == v[n/2 - 1]) && (v[n/2] == n/2 -1) ) return "No";
    }
    return "Yes";
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