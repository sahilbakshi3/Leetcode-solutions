class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        set<int> st(nums.begin(), nums.end());
        vector<int> temp(st.begin(), st.end());

        int maxi = 0;

        int left = 0;

        for(int right = 0; right < temp.size(); right++){
            int target = temp[right] - n + 1;

            while(temp[left] < target){
                left++;
            }

            int curr = right - left + 1;
            maxi = max(maxi, curr);

        }

        return n - maxi;
    }
};