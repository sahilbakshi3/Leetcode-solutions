class Solution {
public:
    int maxSum(vector<int>& nums) {
        // unordered_set<int> st;

        // int sum = 0, neg = INT_MIN;

        // for(auto it: nums){
        //     if(it <= 0){
        //         neg = max(neg, sum);
        //     }
        //     else if(!st.count(it)){
        //         sum += it;
        //         st.insert(it);
        //     }
        // }
        // return sum == 0 ? neg : sum;

        unordered_set<int> st;

        int sum = 0;

        int maxNeg = INT_MIN;

        for(int &num : nums) {
            if(num <= 0) {
                maxNeg = max(maxNeg, num);
            } else if(!st.count(num)) {
                sum += num;
                st.insert(num);
            }
        }
        
        return sum == 0 ? maxNeg : sum;
    }
};