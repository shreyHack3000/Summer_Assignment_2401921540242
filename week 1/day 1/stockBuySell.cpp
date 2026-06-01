class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit=0, bestDay=prices[0];

        for(int i=1; i< prices.size(); i++){

            if(bestDay>prices[i]){
                bestDay=prices[i];
            }

            maxProfit=max(maxProfit, prices[i]- bestDay);
        }

        return maxProfit;

    }
};