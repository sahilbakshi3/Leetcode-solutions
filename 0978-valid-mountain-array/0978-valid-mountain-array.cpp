class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();

        if(n < 3){
            return false;
        }

        bool flag = 1;

        for(int i = 1; i< n; i++){
            if(arr[i] < arr[i-1]){
                if(i == 1){
                    return false;
                }
                flag = 0;
            }
            if(flag == 1){
                if(arr[i] <= arr[i-1]){
                    return false;
                }
            }
            else{
                if(arr[i] >= arr[i-1]){
                    return false;
                }
            }
        }
        if(flag == 1) return false;
        else return true;
    }
};