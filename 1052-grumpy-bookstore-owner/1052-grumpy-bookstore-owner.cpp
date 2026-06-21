class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();

        int res = 0;
        int curr = 0;

        for(int i = 0; i< n; i++){
            if(grumpy[i] == 0){
                res += customers[i];
            }
        }

        for(int i = 0; i < minutes; i++){
            if(grumpy[i]){
                curr += customers[i];
            }
        }

        int extra = curr;

        for(int i = minutes; i < n; i++){
            if(grumpy[i - minutes]){
                curr -= customers[i - minutes];
            }

            if(grumpy[i]){
                curr += customers[i];
            }

            extra = max(extra, curr);
        }

        return res + extra;

    }
};