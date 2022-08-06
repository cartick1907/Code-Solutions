class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int minbuy = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minbuy = min(minbuy, prices[i]);
            profit = max(profit, prices[i] - minbuy);
        }
        return profit;
    }
};