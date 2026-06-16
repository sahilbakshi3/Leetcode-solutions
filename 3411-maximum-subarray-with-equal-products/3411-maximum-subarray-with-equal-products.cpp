class Solution {
public:
    
    int gcd(int a, int b){
        while(b){
            a %= b;
            swap(a, b);
        }

        return a;
    }

    int lcm(int a, int b){
        return a / gcd(a, b) * b;
    }
    
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            int prod = nums[i];
            int g = nums[i];
            int l = nums[i];

            if(prod == g * l){
                ans = max(ans, 1);
            }
            for(int j = i + 1; j < n; j++){
                if(prod * nums[j] > INT_MAX) break;
                prod *= nums[j];

                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if(prod == g * l){
                    ans = max(ans, j - i + 1);
                }
                else {
                    break;
                }
            }
        }

        return ans;
    }
};