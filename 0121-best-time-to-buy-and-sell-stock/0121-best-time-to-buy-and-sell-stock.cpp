class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minval=prices[0];
        for(int i=1; i<prices.size(); i++) {
            minval=min(minval, prices[i]);
            int profit=prices[i]-minval;
            maxprofit=max(profit, maxprofit);
        }
        return maxprofit;
    }
};