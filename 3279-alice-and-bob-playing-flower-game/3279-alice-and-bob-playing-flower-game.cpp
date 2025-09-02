class Solution {
public:
    long long flowerGame(int n, int m) {
        // return 1LL * (((n+1)/2) * (m/2)) + 1LL * (((m+1)/2) * (n/2));

        long oddN = (n + 1) / 2;
        long evenN = n / 2;        
        long oddM = (m + 1) / 2;   
        long evenM = m / 2;        

        return oddN * evenM + evenN * oddM;

    }
};