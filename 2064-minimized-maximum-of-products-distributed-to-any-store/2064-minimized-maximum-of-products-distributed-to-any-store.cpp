class Solution {
public:
    
    bool check(int mid, vector<int> &arr, int shops){
        for(auto &products: arr){
            shops -= (products + mid - 1)/mid;

            if(shops < 0){
                return false;
            }

        } 
        return true;
    }
    
    int minimizedMaximum(int n, vector<int>& arr) {
        int m = arr.size();

        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(mid, arr, n)){
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