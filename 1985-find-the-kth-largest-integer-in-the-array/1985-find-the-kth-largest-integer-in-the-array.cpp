class Solution {
public:
    
    struct cmp {
        bool operator()(string &a, string &b) {
            if (a.size() == b.size())
                return a > b;
            return a.size() > b.size();
        }
    };
    
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size();

        // sort(nums.begin(), nums.end(), [](string &a, string &b) {
        //     if(a.size() == b.size()){
        //         return a < b;
        //     }

        //     return a.size() < b.size();
        // });
        // return nums[n - k];

        priority_queue<string, vector<string>, cmp> pq;

        for(auto &it: nums){
            pq.push(it);

            if(pq.size() > k){
                pq.pop();
            }

        }
        return pq.top();
    }   
};