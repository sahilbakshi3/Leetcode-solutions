class Solution {
public:
    
    // bool solve(vector<int> &nums, int x){
    //     for(int i = 0; i< nums.size(); i++){
    //         if(nums[i] == x){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    
    int longestConsecutive(vector<int>& nums) {
        
        // int maxLen = 0;

        // for(int i = 0; i< nums.size(); i++){
        //     int x = nums[i];
        //     int cnt = 1;
        //     while(solve(nums, x+1) == true){
        //         x++;
        //         cnt++;
        //     }
        //     maxLen = max(maxLen, cnt);
        // }
        // return maxLen;

        int n = nums.size();
        // int maxLen = 0;

        // int last_smaller = INT_MIN, cnt = 1;

        // sort(nums.begin(), nums.end());

        // if(n == 1) return 1;
        // if(n == 0) return 0;

        // for(int i = 0; i< n; i++){
        //     if(nums[i] - 1 == last_smaller){
        //         cnt++;
        //         last_smaller = nums[i];
        //     }
        //     else if(last_smaller != nums[i]){
        //         cnt = 1;
        //         last_smaller = nums[i];
        //     }

        //     maxLen = max(maxLen, cnt);
        // }

        // return maxLen;

        if(n == 0) return 0;

        int maxLen = 1;
        unordered_set<int> st;

        for(int i = 0; i< n; i++){
            st.insert(nums[i]);
        }

        for(auto &it: st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    x++;
                    cnt++;
                }
                maxLen = max(maxLen, cnt);
            }
        }    
    return maxLen;
    
    }
};