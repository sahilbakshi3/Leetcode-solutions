class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();

        priority_queue<long long> pq;

        for(auto &it: nums){
            pq.push(it);
        }

        long long ans = 0;

        while(k--){
            long long top = pq.top();
            pq.pop();

            ans += top;

            pq.push(ceil((double)top / 3));
        }

        return ans;
    }
};