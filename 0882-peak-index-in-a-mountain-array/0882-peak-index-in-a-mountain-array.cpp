class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        // int i = 0;

        // while(arr[i] < arr[i+1]){
        //     i++;
        // }
        // return i;

        int low = 0, high = n-1;

        while(low < high){
            int mid = low + (high - low)/2;

            if(arr[mid] < arr[mid+1]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};