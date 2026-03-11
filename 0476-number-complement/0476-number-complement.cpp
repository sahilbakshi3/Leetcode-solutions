class Solution {
public:
    int findComplement(int num) {
        if(num == 0){
            return 1;
        }

        int cnt = 0;
        int res = 0;

        while(num){
            int rem = num % 2;
            res += (pow(2, cnt) * !rem);
            cnt++;
            num = num/2;
        }
        return res;
    }
};