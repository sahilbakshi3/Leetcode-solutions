class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();


        for(int i = 0; i< n; i++){
            if(arr[i] != 0){
                continue;
            }
            else{
                int j = i+1;
                while(j < n){
                    if(arr[j] == 0){
                        j++;
                    }
                    else{
                        swap(arr[i], arr[j]);
                        break;
                    }
                }
            }
        }

    }
};