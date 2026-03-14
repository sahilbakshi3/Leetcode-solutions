class Solution {
public:
    
    bool check(vector<int> &arr, int mid, int k, int m){
        int bouqetCnt = 0;
        int consecutive_bouqet = 0;

        for(int i = 0; i< arr.size(); i++){
            if(arr[i] <= mid){
                consecutive_bouqet++;
            }
            else{
                consecutive_bouqet = 0;
            }

            if(consecutive_bouqet == k){
                bouqetCnt++;
                consecutive_bouqet = 0;
            }
        }

        return bouqetCnt >= m;

    }
    
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        int low = 1, high = *max_element(arr.begin(), arr.end());

        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(arr, mid, k, m)){
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