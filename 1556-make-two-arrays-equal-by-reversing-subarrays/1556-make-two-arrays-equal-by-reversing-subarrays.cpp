class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // sort(target.begin(), target.end());
        // sort(arr.begin(), arr.end());

        // if(target == arr){
        //     return true;
        // }
        // else return false;

        unordered_map<int, int> mp1, mp2;

        for(auto it: target){
            mp1[it]++;
        }

        for(auto it: arr){
            mp2[it]++;
        }

        if(mp1 == mp2){
            return true;
        }
        else{
            return false;
        }

    }
};