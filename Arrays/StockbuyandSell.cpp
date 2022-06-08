class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=INT_MIN,mn=INT_MAX; //maintain two variables for maximizing the profit and storing the last minimum priced value so to calculate the profit at each time
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mn) mn=prices[i];
            profit=max(profit,prices[i]-mn);
        }
        return profit;
    }
};