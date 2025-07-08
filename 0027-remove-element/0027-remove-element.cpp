class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        // int k = 0;

        // for(int i = 0; i< n; i++){
        //     if(nums[i] != val){
        //         nums[k] = nums[i];
        //         k++;
        //     }
        // }
        // return k;

        vector<int> res;

        for(int i = 0; i< n; i++){
            if(nums[i] != val){
                res.push_back(nums[i]);
            }
        }

        nums.clear();

        for(int i = 0; i< res.size(); i++){
            nums.push_back(res[i]);
        }
        return nums.size();
    }
};