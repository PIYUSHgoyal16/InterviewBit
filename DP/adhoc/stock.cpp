class Solution {
    public:
        int maxProfit(vector<int> &prices) {
            int total = 0, sz = prices.size();
            for (int i = 0; i < sz - 1; i++) {
                if (prices[i+1] > prices[i]) total += prices[i+1] - prices[i];
            }
            return total;
        }
};
