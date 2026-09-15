class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
      int prev = 0;
      int prev2 =0;
      int mincost=0;

      for(int i =2;i<=cost.size();i++){
        mincost = min(prev+cost[i-1],prev2+cost[i-2]);
        prev2 =prev;
        prev=mincost;
      }  
      return mincost;
    }
};
