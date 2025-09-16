class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        int maxEle = -1;

        for(int i = n-1; i>=0; i--){
            int currEle = arr[i];
            arr[i] = maxEle;

            if(maxEle < currEle){
                maxEle = currEle;
            }
        }
        return arr;
    }
};