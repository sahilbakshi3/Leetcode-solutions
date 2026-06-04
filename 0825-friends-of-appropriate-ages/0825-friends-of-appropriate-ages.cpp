class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n = ages.size();

        sort(ages.begin(), ages.end());
        int ans = 0;

        for(int i = 0; i< n; i++){
            int age = ages[i];

            if(age <= 14) continue;

            int low = upper_bound(ages.begin(), ages.end(), age / 2.0 + 7) - ages.begin();

            int high = upper_bound(ages.begin(), ages.end(), age) - ages.begin();

            ans += high - low - 1;

        }

        return ans;
    }
};