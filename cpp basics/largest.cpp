class Solution {
public:
    int largestElement(vector<int>& nums) {
        int ans = nums[0];
        for(auto val : nums){
            if(val > ans){
                ans = val;
            }
        }
    return ans;
    }
};
