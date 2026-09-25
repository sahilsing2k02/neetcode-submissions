class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> arr(nums.begin(),nums.end());
       int n = arr.size();
       return n<nums.size();
    }
};