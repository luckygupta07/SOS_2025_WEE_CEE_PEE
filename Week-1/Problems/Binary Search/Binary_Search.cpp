class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] = {};
        for(int i:nums) arr[i]++;
        int idx = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i];j++){
                nums[idx++] = i;
            }
        }
    }
};