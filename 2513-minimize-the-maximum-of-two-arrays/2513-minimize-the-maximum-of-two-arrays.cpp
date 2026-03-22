class Solution {
public:
    
    long long lcm(long long a, long long b){
        return (a / __gcd(a, b)) * b;
    }

    bool solve(long long mid, int d1, int d2, int c1, int c2){
        long long l = lcm(d1, d2);
        
        long long only1 = mid/d2 - mid/l; 
        long long only2 = mid/d1 - mid/l; 
        long long both  = mid - (mid/d1 + mid/d2 - mid/l);

        long long need1 = max(0LL, (long long)c1 - only1);
        long long need2 = max(0LL, (long long)c2 - only2);

        return (need1 + need2) <= both;

    }
    
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long low = 1, high = 1e18;
        long long ans = 0;

        while(low <= high){
            long long mid = low + (high - low)/2;

            if(solve(mid, divisor1, divisor2, uniqueCnt1, uniqueCnt2)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return (int) ans;
    }   
};