class Solution {
   public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for (int n : nums) {
            if (hash.find(n) != hash.end()) return n;
            hash.insert(n);
        }
    return -1;
    }
};