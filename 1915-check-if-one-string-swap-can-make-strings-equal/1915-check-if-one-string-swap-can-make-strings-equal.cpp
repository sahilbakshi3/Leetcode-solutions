class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        if (s1 == s2) return true;

        // // try swapping in s1
        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         swap(s1[i], s1[j]);
        //         if (s1 == s2) return true;
        //         swap(s1[i], s1[j]); // undo
        //     }
        // }

        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         swap(s2[i], s2[j]);
        //         if (s1 == s2) return true;
        //         swap(s2[i], s2[j]); // undo
        //     }
        // }
        // return false;

        vector<int> diff;
        for(int i = 0; i< n; i++){
            if(s1[i] != s2[i]){
                diff.push_back(i);
            }
            if(diff.size() > 2){
                return false;
            }
        }

        if(diff.size() == 2){
            int i = diff[0], j = diff[1];
            return (s1[i] == s2[j] && s1[j] == s2[i]);
        }
        return false;
    }
};