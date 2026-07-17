#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n,x;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}