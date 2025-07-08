class Solution {
public:

    static bool comp(int &a, int &b){
        return a%2 < b%2;
    }

    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();

        // int j = 0;

        // for(int i = 0; i< n; i++){
        //     if(nums[i] % 2 == 0){
        //         swap(nums[i], nums[j]);
        //         j++;
        //     }
        // }
        // return nums;

        sort(nums.begin(), nums.end(), comp);

        return nums;
    }
};