class Solution {
public:
    
    int sum(int num){
        int ans = 0;

        while(num > 0){
            ans += num % 10;
            num /= 10;
        }

        return ans;

    }
    
    int countEven(int num) {
        int cnt = 0;

        for(int i = 1; i<= num; i++){
            if(sum(i) % 2 == 0){
                cnt++;
            }
        }
        return cnt;
    }
};