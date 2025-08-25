class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];

        for (int i=1; i<prices.size(); i++) {
            int profit = prices[i]-minPrice;
            maxProfit = max(maxProfit, profit);

            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }
};