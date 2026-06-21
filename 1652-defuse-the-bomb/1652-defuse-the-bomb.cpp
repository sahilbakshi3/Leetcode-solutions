class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();

        vector<int> ans(n, 0);

        if(k == 0){
            return ans;
        }

        int left = -1, right = -1;

        if(k > 0){
            left = 1;
            right = k;
        }
        else {
            left = n + k;
            right = n - 1;
            k = -k;
        }

        int sum = 0;

        for(int i = left; i <= right; i++){
            sum += code[i % n];
        }

        for(int i = 0; i < n; i++){
            ans[i] = sum;

            sum -= code[left % n];
            left++;
            right++;
            sum += code[right % n];
        }

        return ans;
    
    }
};