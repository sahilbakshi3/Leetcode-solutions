class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int> res(n);

        int left = 0, cnt = 0;

        for(auto &it: nums){
            if(it < pivot){
                res[left] = it;
                left++;
            }
            else if(it == pivot){
                cnt++;
            }
        }

        while(cnt--){
            res[left] = pivot;
            left++;
        }

        for(auto &it: nums){
            if(it > pivot){
                res[left] = it;
                left++;
            }
        }

        return res;

    }
};