#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()


void solve() {
    int n, sx, sy;
    cin >> n >> sx >> sy;
    // vi v(n);
    // for(int &i:v) cin >> i;
    int c1=0,c2=0,c3=0,c4=0;
    while(n--){
        int xi, yi;
        cin >> xi >> yi;
        if(yi>=sy+1) c1++;
        if(xi>=sx+1) c2++;
        if(yi<=sy-1) c3++;
        if(xi<=sx-1) c4++;
    }
    int maxi = max({c1, c2, c3, c4});
    cout<<maxi<<"\n";
    if(maxi == c1){
        cout << sx <<" "<< sy + 1;
    }
    else if(maxi == c2){
        cout << sx +1 <<" "<< sy;
    }
    else if(maxi == c3){
        cout << sx  <<" "<< sy - 1;
    }
    else if(maxi == c4){
        cout << sx - 1<<" "<< sy;
    }

    cout << "\n";
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