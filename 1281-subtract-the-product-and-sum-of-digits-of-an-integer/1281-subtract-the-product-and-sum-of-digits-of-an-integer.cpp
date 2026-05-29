class Solution {
public:
    
    int product(int n){
        if(n < 10){
            return n;
        }

        return (n % 10) * product(n / 10);

    }
    int sum(int n){
        if(n < 10){
            return n;
        }

        return (n % 10) + sum(n / 10);

    }
    
    int subtractProductAndSum(int n) {
        return product(n) - sum(n);
    }
};