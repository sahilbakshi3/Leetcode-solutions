class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        
        int s=0,e=arr.size()-1;
        while(s<=e){
            if(arr[s]==num1) break;
            else s+=1;
        }
        
        while(e>=0){
            if(arr[e]==num2) break;
            else e-=1;
        }
        
        int ans= max(0,(e-s-1));
        
        return ans;
    }
};