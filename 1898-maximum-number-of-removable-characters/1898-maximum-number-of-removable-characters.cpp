class Solution {
public:
    
    bool isSubsequence(string &s, string &p, vector<bool> &removed) {
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (removed[i]) continue;

            if (j < p.size() && s[i] == p[j]) {
                j++;
            }
        }

        return j == p.size();
    }
    
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int n = removable.size();
        // int ans = 0;

        // for (int k = 0; k <= n; k++) {
        //     vector<bool> removed(s.size(), false);

        //     for (int i = 0; i < k; i++) {
        //         removed[removable[i]] = true;
        //     }

        //     if (isSubsequence(s, p, removed)) {
        //         ans = k;
        //     } else {
        //         break;
        //     }
        // }

        // return ans;

        int low = 0, high = removable.size();
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            vector<bool> removed(s.size(), false);

            for (int i = 0; i < mid; i++) {
                removed[removable[i]] = true;
            }

            if (isSubsequence(s, p, removed)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;

    }
};