class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);

        int n = s.length();
        vector<int> right(10, -1);

        for(int i = 0; i< n; i++){
            right[s[i] - '0'] = i;
        }

        for(int i = 0; i< n; i++){
            int curr = s[i] - '0';

            for(int j = 9; j > curr; j--){
                if(right[j] > i){
                    swap(s[i], s[right[j]]);
                    return stoi(s);
                }
            }

        }

        return num;

    }
};