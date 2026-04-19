class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int>mp;
      int left =0, ans=0;

      for(int right =0;right<s.size();right++){
        mp[s[right]]++;

        //shrink the windows if duplicate

        while(mp[s[right]]>1){
            mp[s[left]]--;
            left++;
        }
        ans = max(ans,right-left+1);
      }
      return ans;
    }
};
