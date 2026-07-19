#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

//Factorial and inverse factorials
const int mod = 998244353;
const int N = 300009;
 
vector<int> factorial(N), inv_factorial(N);
 
int modpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
void precompute() {
    factorial[0] = 1;
    for (int i = 1; i < N; i++) {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }
 
    inv_factorial[N - 1] = modpow(factorial[N - 1], mod - 2);
    for (int i = N - 2; i >= 0; i--) {
        inv_factorial[i] = (inv_factorial[i + 1] * (i + 1)) % mod;
    }
}
 
int nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    return (factorial[n] * inv_factorial[r] % mod) * inv_factorial[n - r] % mod;
}

int solve() {
    int n, k;
    cin >> n >> k;
    map<int,int> mp, mp2;
    for(int i=0;i<n;i++){
        int l, r;
        cin >>l >> r;
        mp[l]++;
        mp[r+1]--;
        mp2[l]++;
    }
    int pre = 0, ans = 0;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        int l = it ->first;
        pre += it->second;
        ans = ((ans + nCr(pre, k) - nCr(pre - mp2[l], k)) % mod + mod) % mod;
    }
    return ans;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    precompute();
    while (t--) 
    cout << solve() << '\n';
    return 0;
}