class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPri = INT_MAX;
        int maxP = 0;

        for(int i = 0; i < prices.size(); i++){
            
            if(prices[i] < minPri){
                minPri = prices[i];
            }

            int prft = prices[i] - minPri;

            if(prft > maxP){
                maxP = prft;
            }
        }

        return maxP;
    }
};
