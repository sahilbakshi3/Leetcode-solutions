class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();

        // while(n > 1){

        //     vector<int> temp;

        //     for(int i = 0; i< n-1; i++){
        //         temp.push_back((nums[i] + nums[i+1]) % 10);
        //     }
        //     nums = move(temp);
            
        // }

        // return nums[0];
        
        if(n == 1){
            return nums[0];
        }

        vector<int> newNums(n-1);

        for(int i = 0; i< n-1; i++){
            newNums[i] = (nums[i] + nums[i+1])%10;

        }
        return triangularSum(newNums);

    }
};