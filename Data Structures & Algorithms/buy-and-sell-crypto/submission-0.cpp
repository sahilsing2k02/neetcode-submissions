class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
       int bestbuy =prices[0];
       int n = prices.size();
       for(int i=1;i<n;i++){
        if(prices[i]>bestbuy)
            profit = max(profit,prices[i]-bestbuy);
            bestbuy = min(bestbuy,prices[i]);
       }
       return profit;
    }
};
