class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> count(37, 0);
        
        for(int i = 1; i <= n; i++) {
            int x = i, sum = 0;
            
            while(x > 0) {
                sum += x % 10;
                x /= 10;
            }
            
            count[sum]++;
        }
        
        int maxSize = 0;
        for(int c : count) {
            maxSize = max(maxSize, c);
        }

        int result = 0;
        for(int c : count) {
            if(c == maxSize) result++;
        }
        
        return result;
    }
};