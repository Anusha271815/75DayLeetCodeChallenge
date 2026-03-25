class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector<int> buy(n);
        vector<int> sell(n);

        buy[0] = prices[0];
        sell[n-1] = prices[n-1];

        for(int i = 1; i < n; i++){
            buy[i] = min(buy[i-1], prices[i]);
        }

        for(int i = n-2; i >= 0; i--){
            sell[i] = max(sell[i+1], prices[i]);
        }

        int maxdiff = 0;

        for(int i = 0; i < n; i++){
            maxdiff = max(maxdiff, sell[i] - buy[i]);
        }

        return maxdiff;
    }
};