class Solution {
public:
    
    bool check(int force, vector<int> &arr, int m){
        int prev = arr[0];
        int balls = 1;

        for(int i = 1; i< arr.size(); i++){
            int curr = arr[i];
            if(curr - prev >= force){
                balls++;
                prev = curr;
            }
            if(balls == m){
                break;
            }
        }
        return balls == m;
    }
    
    int maxDistance(vector<int>& arr, int m) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int low = 1, high = arr[n-1] - arr[0];
        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(mid, arr, m)){
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