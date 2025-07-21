class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       int n = prices.size();

    //    for(int i = 0; i< n; i++){
    //         for(int j = i+1; j< n; j++){
    //             if(prices[i] >= prices[j]){
    //                 prices[i] -= prices[j];
    //                 break;
    //             }
    //         }
    //    } 
    //    return prices;

        stack<int> s;
        vector<int> res(prices.begin(), prices.end());

        for(int i = 0; i< n; i++){
            while(!s.empty() && prices[i] <= prices[s.top()]){
                res[s.top()] -= prices[i];
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};