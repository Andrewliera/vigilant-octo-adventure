
//very very similar to the EPI buy_sell_once.py
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit = 0;
        int temp_min_price = INT_MAX;
        int length = prices.size();
        
        for(int i =0; i < length; i++){
            int max_index_sale = prices[i] - temp_min_price;
            max_profit = max(max_profit, max_index_sale);
            temp_min_price = min(temp_min_price, prices[i]);
        }
        return max_profit;
    }
};
