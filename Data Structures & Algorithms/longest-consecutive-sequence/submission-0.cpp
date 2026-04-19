class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int num : s) {
            // only start counting if it's the beginning of a sequence
            if(!s.count(num - 1)) {
                int curr = num;
                int length = 1;

                while(s.count(curr + 1)) {
                    curr++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
