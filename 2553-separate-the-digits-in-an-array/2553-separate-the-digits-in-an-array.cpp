class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;

        // for(int i = 0; i< n; i++){
        //     string s = to_string(nums[i]);

        //     for(int j = 0; j< s.length(); j++){
        //         ans.push_back(s[j] - '0');
        //     }

        // }

        for(int i = 0; i< n; i++){
            vector<int> temp;

            while(nums[i] > 0){
                temp.push_back(nums[i] % 10);
                nums[i] /= 10;
            }

            reverse(temp.begin(), temp.end());

            for(auto &it: temp){
                ans.push_back(it);
            }

        }

        return ans;

    }
};