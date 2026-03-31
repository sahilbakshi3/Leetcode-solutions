class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> maxHeap;
        int mini = INT_MAX;

        for (int x : nums) {
            if (x % 2 == 1) x *= 2;
            maxHeap.push(x);
            mini = min(mini, x);
        }

        int ans = INT_MAX;

        while (true) {
            int maxi = maxHeap.top();
            maxHeap.pop();

            ans = min(ans, maxi - mini);

            if (maxi % 2 == 1) break;


            maxi /= 2;
            mini = min(mini, maxi);

            maxHeap.push(maxi);
        }

        return ans;
    }
};