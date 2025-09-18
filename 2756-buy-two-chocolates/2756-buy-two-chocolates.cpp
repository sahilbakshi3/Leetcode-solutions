class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();

        int mini = INT_MAX;
        int secMin = INT_MAX;

        for(int i = 0; i< n; i++){
            if(prices[i] < mini){
                secMin = mini;
                mini = prices[i];
            }
            else{
                secMin = min(secMin, prices[i]);
            }
        }

        if(mini + secMin > money){
            return money;
        }
        return money - (mini + secMin);
    }
};