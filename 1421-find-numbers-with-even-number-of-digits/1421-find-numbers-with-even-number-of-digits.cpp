class Solution {
public:
    
    int countDigits(int x){
        int cnt = 0;
        while(x > 0){
            x /= 10;
            cnt++;
        }
        return cnt;
    }
    
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        
        int cnt = 0;

        // for(auto it: nums){
        //     string s = to_string(it);
        //     if(s.length() % 2 == 0) cnt++;
        // }
        // return cnt;

        // int cnt = 0;
        
        // for(auto it: nums){
        //     if(countDigits(it) % 2 == 0){
        //         cnt++;
        //     }
        // }
        // return cnt;

        for(auto it: nums){
            int digits = log10(it) + 1;
            if(digits % 2 == 0) cnt++;
        }
        return cnt;
    }
};