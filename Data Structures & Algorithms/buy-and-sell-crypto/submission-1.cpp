class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if sorted in decressing order return 0

        int buy = 0;
        int sell = buy+1;
        int profit = 0;

        while(sell!=prices.size()){
            if(prices[buy]>prices[sell]){
                buy=sell;
                sell++;
            }else if(prices[buy]<prices[sell]){
                int temp = prices[sell]-prices[buy];
                if(temp>profit) profit = temp;
                sell++;
            }else{
                sell++;
            }
        }
        
        return profit;
    }
};
