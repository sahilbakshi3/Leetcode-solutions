class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {

        // Brute Force - O(n * m * p), O(1)
        //
        // vector<int> ans;
        //
        // for(int x : arr1) {
        //
        //     bool foundInArr2 = false;
        //     bool foundInArr3 = false;
        //
        //     for(int y : arr2) {
        //         if(x == y) {
        //             foundInArr2 = true;
        //             break;
        //         }
        //     }
        //
        //     for(int z : arr3) {
        //         if(x == z) {
        //             foundInArr3 = true;
        //             break;
        //         }
        //     }
        //
        //     if(foundInArr2 && foundInArr3) {
        //         ans.push_back(x);
        //     }
        // }
        //
        // return ans;


        // Better Solution - O(n + m + p), O(n + m + p)
        //
        // unordered_map<int, int> freq;
        //
        // for(int num : arr1) freq[num]++;
        // for(int num : arr2) freq[num]++;
        // for(int num : arr3) freq[num]++;
        //
        // vector<int> ans;
        //
        // for(auto &it : freq) {
        //     if(it.second == 3) {
        //         ans.push_back(it.first);
        //     }
        // }
        //
        // sort(ans.begin(), ans.end());
        //
        // return ans;


        // Optimal Solution - O(n + m + p), O(1)

        vector<int> ans;

        int i = 0;
        int j = 0;
        int k = 0;

        while(i < arr1.size() && j < arr2.size() && k < arr3.size()) {

            if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {

                ans.push_back(arr1[i]);

                i++;
                j++;
                k++;
            }
            else {

                int mn = min({arr1[i], arr2[j], arr3[k]});

                if(arr1[i] == mn) i++;
                if(arr2[j] == mn) j++;
                if(arr3[k] == mn) k++;
            }
        }

        return ans;
    }
};
