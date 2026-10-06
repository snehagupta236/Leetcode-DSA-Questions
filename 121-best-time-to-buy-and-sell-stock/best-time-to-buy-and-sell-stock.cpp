class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //    int maxprofit = 0;
    //    int n = prices.size();
    //    for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //        maxprofit = max(maxprofit, prices[j] - prices[i]);
    //     }
    //    }  
    //    return maxprofit;  
     int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int p : prices) {
            minPrice = min(minPrice, p);
            maxProfit = max(maxProfit, p - minPrice);
        }
        return maxProfit;
    }
};