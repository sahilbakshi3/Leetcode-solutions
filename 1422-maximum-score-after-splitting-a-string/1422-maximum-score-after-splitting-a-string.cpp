class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        
        for(char c : s) {
            if(c == '1') totalOnes++;
        }
        
        int zerosLeft = 0, onesLeft = 0;
        int maxScore = 0;
        
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '0') zerosLeft++;
            else onesLeft++;
            
            int score = zerosLeft + (totalOnes - onesLeft);
            maxScore = max(maxScore, score);
        }
        
        return maxScore;
    }
};