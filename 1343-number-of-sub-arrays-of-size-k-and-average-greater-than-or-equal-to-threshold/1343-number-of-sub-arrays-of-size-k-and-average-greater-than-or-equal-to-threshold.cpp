class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();

        int targetSum = threshold * k;
        int currSum = 0;
        int cnt = 0;

        for(int i = 0; i< k; i++){
            currSum += arr[i];
        }

        if(currSum >= targetSum){
            cnt++;
        }

        for(int i = k; i < n; i++){
            currSum += arr[i] - arr[i - k];

            if(currSum >= targetSum){
                cnt++;
            }
        }

        return cnt;

    }
};