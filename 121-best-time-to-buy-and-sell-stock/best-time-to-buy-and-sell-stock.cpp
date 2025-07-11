class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price=prices[0];
        int profit=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<buy_price){
                buy_price =prices[i];
            }
            else{
                int current_price=prices[i]-buy_price;
                profit=max(current_price,profit);
            }
        }
        return profit;
    }
}; 





