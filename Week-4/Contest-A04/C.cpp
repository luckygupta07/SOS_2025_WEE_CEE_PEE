#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
map<int,int> mp;

bool sim(int w){
    if(mp.count(w) && mp[w] > 0){
        mp[w]--;
        if(mp[w] == 0) mp.erase(w);
        return true;
    }
    if(w < 2) return false;
    return sim(w/2) && sim((w+1)/2);
}

string solve() {
    cin >> n;
    mp.clear();
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        sum += x;
    }
    if(sim(sum)) return "YES";
    return "NO";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        cout << solve() << '\n';
    return 0;
}