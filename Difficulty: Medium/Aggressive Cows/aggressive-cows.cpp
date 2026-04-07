class Solution {
  public:
    
    bool check(vector<int> &stalls, int dist, int k){
        int cntCows = 1;
        int lastCow = stalls[0];
        
        for(int i = 1; i< stalls.size(); i++){
            if(stalls[i] - lastCow >= dist){
                cntCows++;
                lastCow = stalls[i];
            }
        }
        
        return (cntCows >= k);
        
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        
        sort(stalls.begin(), stalls.end());
        
        int low = 1, high = stalls[n-1] - stalls[0];
        int ans = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(check(stalls, mid, k)){
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