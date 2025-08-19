class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {        
        // int row = 0;

        // auto lambda = [&](int sum, vector<int> &temp){
        //     sum += temp[row];

        //     if(row != temp.size() - row -1){
        //         sum += temp[temp.size() - row - 1];
        //     }

        //     row++;

        //     return sum;
        // };


        // int res = accumulate(mat.begin(), mat.end(), 0, lambda);

        // return res;

        int n = mat.size();
        int sum = 0;

        for(int i = 0; i< n; i++){
            sum += mat[i][i];

            if(i != n - i - 1){
                sum += mat[i][n - i - 1];
            }
        }
        return sum;
    }
};