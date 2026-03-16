class Solution {
public:
    
    bool check(vector<int>& candies, long long mid, long long k){
        long long children = 0;

        for(int i = 0; i< candies.size(); i++){
            children += candies[i]/mid;

            if(children >= k){
                return true;
            }

        }
        return children >= k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();

        // int maxCnt = 0;
        // int total = 0;
        // for(int i = 0; i< n; i++){
        //     total += candies[i];
        //     maxCnt = max(maxCnt, candies[i]);
        // }

        // if(total < k){
        //     return 0;
        // }

        // for(int c = maxCnt; c >= 1; c--){
        //     long long count = 0;

        //     for(int i = 0; i< n; i++){
        //         count += candies[i]/c;
        //     }

        //     if(count >= k){
        //         return c;
        //     }
        // }
        // return 0;

        long long low = 1, high = *max_element(candies.begin(), candies.end());
        long long ans = -1;

        long long total = 0;

        for(int i = 0; i< n; i++){
            total += candies[i];
        }

        if(total < k){
            return 0;
        }

        while(low <= high){
            long long mid = low + (high - low)/2;

            if(check(candies, mid, k)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        return ans;
    }
};