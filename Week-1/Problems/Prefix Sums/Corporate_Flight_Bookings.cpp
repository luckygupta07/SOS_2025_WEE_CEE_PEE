class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> pre(n);
        for(auto &v:bookings){
            int seats = v[2];
            pre[v[0] - 1] += seats;
            if(v[1] < n) pre[v[1]] -= seats;
        }
        for(int i=1;i<n;i++) pre[i] += pre[i-1];
        return pre;
    }
};