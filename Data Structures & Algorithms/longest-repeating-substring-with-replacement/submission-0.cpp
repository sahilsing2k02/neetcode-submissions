class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int ans = 0;

        int l = 0, maxf = 0;

        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);//mps mmost   repeating character

            // if tracked condition is voilated shrink
            while ((r - l + 1) - maxf > k) {
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};