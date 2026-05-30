class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<char> odd, even;

        for(auto &it: s){
            int digit = it - '0';

            if(digit % 2 == 0){
                even.push_back(it);
            }
            else{
                odd.push_back(it);
            }
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());

        int oddIdx = 0;
        int evenIdx = 0;

        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';

            if (digit % 2)
                s[i] = odd[oddIdx++];
            else
                s[i] = even[evenIdx++];
        }

        return stoi(s);

    }
};