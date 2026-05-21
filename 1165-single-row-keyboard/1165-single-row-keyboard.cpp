class Solution {
public:

    int calculateTime(string keyboard, string word) {

        unordered_map<char, int> pos;

        for (int i = 0; i < 26; i++) {

            pos[keyboard[i]] = i;
        }

        int currPos = 0;

        int totalTime = 0;

        for (char ch : word) {

            int targetPos = pos[ch];

            totalTime += abs(targetPos - currPos);

            currPos = targetPos;
        }

        return totalTime;
    }
};
