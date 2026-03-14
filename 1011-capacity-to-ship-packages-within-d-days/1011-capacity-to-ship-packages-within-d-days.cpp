class Solution {
public:
    
    bool check(vector<int>&arr, int capacity, int days){
        int daysNeeded = 1;
        int currLoad = 0;

        for(auto &it: arr){
            if(currLoad + it > capacity){
                daysNeeded++;
                currLoad = 0;
            }
            currLoad += it;
        }
        return daysNeeded <= days;
    }

    int shipWithinDays(vector<int>& arr, int days) {
        int low = *max_element(arr.begin(), arr.end());
        int high = 0;

        for(auto &it: arr){
            high += it;
        }

        // for(int cap = low; cap <= high; cap++){
        //     if(check(arr, cap, days)){
        //         return cap;
        //     }
        // }
        
        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(arr, mid, days)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }

        return ans;

    }
};