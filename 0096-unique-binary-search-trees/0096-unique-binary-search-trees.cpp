class Solution {
public:
    
    int solve(int n){
        if(n == 0 || n == 1){
            return 1;
        }

        int total = 0;

        for(int i = 1; i <= n; i++){
            int left_bst = solve(i - 1);
            int right_bst = solve(n - i);

            total += left_bst * right_bst;
        }

        return total;

    }
    
    int numTrees(int n) {

        return solve(n);
    }
};