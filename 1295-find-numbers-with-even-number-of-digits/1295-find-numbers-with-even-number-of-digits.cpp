class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        
        int cnt = 0;
        
        for(auto it: nums){
            string s = to_string(it);
            if(s.length() % 2 == 0) cnt++;
        }
        return cnt;
    }
};