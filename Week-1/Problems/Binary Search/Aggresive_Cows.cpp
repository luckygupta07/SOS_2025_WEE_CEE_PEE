class Solution {
  public:
  
    bool valid(int m, vector<int>& stalls, int k){
        int cow = 1, curr = 0, n = stalls.size();
        for(int i=1;i<n;i++){
            curr+= (stalls[i] - stalls[i-1]);
            if(curr>= m){
                curr = 0;
                cow++;
                if(cow >= k) return true;
            }
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int lo = 1, hi = stalls[n-1] - stalls[0];
        int mind = -1;
        while(lo<=hi){
            int m = (lo + hi)/2;
            if(valid(m, stalls, k)){
                mind = m;
                lo = m + 1;
            }
            else hi = m - 1;
        }
        return mind;
    }
};