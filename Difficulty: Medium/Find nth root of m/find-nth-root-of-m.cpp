class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        
        if(m == 0) return 0;
        
        int low = 1;
        int high = m;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            long long val = 1;
            
            for(int i = 0; i < n; i++){
                val *= mid;
                
                if(val > m) break;
            }
            
            if(val == m){
                return mid;
            }
            
            else if(val < m){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return -1;
    }
};