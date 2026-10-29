class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int ans =0;
      int bb = prices[0];

      for(int i =0;i<prices.size();i++){
        ans = max(ans,prices[i]-bb);
        bb = min(bb,prices[i]);
      }  
      return ans;
    }
};
