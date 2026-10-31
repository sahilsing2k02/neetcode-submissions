class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int>mp;
      int l =0, ans = 0;

      for(int r=0;r<s.size();r++){
        mp[s[r]]++;//insert element;

        while(mp[s[r]]>1){
            mp[s[l]]--;//deduct 1st element
            l++;//increase left pointer
        }
        ans = max(ans,r-l+1);
      }  
      return ans;
    }
};
