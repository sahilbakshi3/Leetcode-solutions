class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();

    //     for(int i = 0; i< n; i++){
    //         for(int j = 0; j< n; j++){
    //             if(i != j && arr[i] == 2 * arr[j]){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;

        unordered_set<int> us;
        for(int i = 0; i < arr.size(); i++)
            if( (us.find(2 * arr[i]) != us.end()) || ( (arr[i] % 2 == 0) && us.find(arr[i] / 2) != us.end() ) )
                    return 1;
            else
                us.insert(arr[i]);
        return 0;
    }
};