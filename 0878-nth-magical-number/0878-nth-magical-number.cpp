class Solution {
public:

    int mod = 1e9 + 7;
    
    long long gcd(long long a, long long b){
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b){
        return (a / gcd(a, b)) * b;
    }
    
    int nthMagicalNumber(int n, int a, int b) {
        long long low = min(a, b);
        long long high =1LL * n * min(a, b);

        long long LCM = lcm(a, b);

        while(low <= high){
            long long mid = low + (high - low)/2;

            long long cnt = mid/a + mid/b - mid/LCM;

            if(cnt < n){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        return low % mod;
    }
};