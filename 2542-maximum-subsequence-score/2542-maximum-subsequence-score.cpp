class Solution {
public:
    
    // long long solve(int i, int k, long long sum, vector<int> &nums1, vector<int> &nums2, int mini){
    //     if(k == 0){
    //         return (sum * mini);
    //     }

    //     if(i >= nums1.size()){
    //         return 0;
    //     }

    //     int minVal = (mini == INT_MAX) ? nums2[i] : min(mini, nums2[i]);

    //     long long take = solve(i+1, k-1, sum + nums1[i], nums1, nums2, minVal);

    //     long long notake = solve(i+1, k, sum, nums1, nums2, mini);

    //     return max(take, notake);

    // }
    
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        // return solve(0, k, 0, nums1, nums2, INT_MAX);

        int n = nums1.size();

        vector<pair<int, int>> vec(n);

        for(int i = 0; i< n; i++){
            vec[i] = {nums1[i], nums2[i]};
        }

        auto lambda = [&](auto &p1, auto &p2){
            return p1.second > p2.second;
        };

        sort(vec.begin(), vec.end(), lambda);

        priority_queue<int, vector<int>, greater<int>> pq;
        
        long long sum = 0;

        for(int i = 0; i <= k-1; i++){
            sum += vec[i].first;
            pq.push(vec[i].first);
        }

        long long res = sum * vec[k-1].second;

        for(int i = k; i< n; i++){
            sum += vec[i].first - pq.top();
            pq.pop();

            pq.push(vec[i].first);

            res = max(res, sum * vec[i].second);
        }

        return res;

    }
};