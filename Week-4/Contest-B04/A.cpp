#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


string solve() {
    int n;
    cin >> n;
    if(n == 1 || n == 3) return"-1";
    string sodd = "36366";
    string seve = "66";
    if(n&1){
        n-=5;
        string ans = "";
        for(int i=0;i<n;i++) ans+= "3";
        ans += sodd;
        return ans;
    }
    else{
        n -= 2;
        string ans = "";
        for(int i=0;i<n;i++) ans+= "3";
        ans += seve;
        return ans;
    }
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