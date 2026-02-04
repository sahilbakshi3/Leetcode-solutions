// Function to count the number of walls that need to be reduced.
class Solution {
  public:
    int reducingWalls(vector<int>& arr, int k) {
        // your code
        
        int n = arr.size();
        
        int cnt = 0;
        
        for(int i = 0; i< n; i++){
            if(arr[i] > k){
                cnt += (arr[i] -1)/k;
            }
        }
        
        return cnt;
        
    }
};