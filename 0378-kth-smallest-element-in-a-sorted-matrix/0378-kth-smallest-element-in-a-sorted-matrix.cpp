class Solution {
public:
    
    int count(vector<vector<int>> &mat, int mid){
        int n = mat.size();
        int cnt = 0;
        int row = n - 1;
        int col = 0;

        while(row >= 0 && col < n){
            if(mat[row][col] <= mid){
                cnt += row + 1;
                col++;
            }
            else{
                row--;
            }
        }
        return cnt;
    }
    
    int kthSmallest(vector<vector<int>>& mat, int k) {
        // vector<int> res;
        // for(auto &it: matrix){
        //     for(auto &val: it){
        //         res.push_back(val);
        //     }
        // }

        // sort(res.begin(), res.end());
        // return res[k-1];

        int n = mat.size();

        int low = mat[0][0];
        int high = mat[n-1][n-1];

        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(count(mat, mid) >= k){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};