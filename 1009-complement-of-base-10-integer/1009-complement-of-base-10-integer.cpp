class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0){
            return 1;
        }

        int cnt = 0;
        int res = 0;

        while(n){
            int rem = n % 2;
            res += (pow(2, cnt) * !rem);
            cnt++;
            n = n/2;
        }
        return res;
    }
};