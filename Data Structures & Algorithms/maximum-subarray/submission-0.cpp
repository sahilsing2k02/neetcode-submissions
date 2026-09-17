class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = 0;
        int maxsum = nums[0];

        for(int i =0;i<nums.size();i++){
            cursum = max(nums[i],cursum + nums[i]);
            maxsum = max(cursum,maxsum);
        }
        return maxsum;
    }
};
