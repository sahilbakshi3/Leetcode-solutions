class Solution {
public:

    bool canPermutePalindrome(string s) {

        unordered_map<char, int> freq;

        for (char ch : s) {

            freq[ch]++;
        }

        int oddCount = 0;

        for (auto& [ch, count] : freq) {

            if (count % 2 == 1) {

                oddCount++;
            }
        }

        return oddCount <= 1;
    }
};
