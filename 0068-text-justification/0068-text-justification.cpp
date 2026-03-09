class Solution {
public:
    
    int max_width;

    
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n = words.size();
        vector<string> res;
        max_width = maxWidth;

        int i = 0;

        while(i < n){
            int lineLen = 0;
            int j = i;

            while(j < n && lineLen + words[j].size() + (j - i) <= max_width){
                lineLen += words[j].size();
                j++;
            }

            int gaps = j - i - 1;
            string line;

            if(j == n || gaps == 0){
                for(int k = i; k < j; k++){
                    line += words[k];
                    if(k < j-1){
                        line += " ";
                    }
                }
            line += string(max_width - line.size(), ' ');
            }
            else{
                int spaces = max_width - lineLen;
                int spaceEach = spaces / gaps;
                int extra = spaces % gaps;

                for(int k = i; k< j; k++){
                    line += words[k];
                    if(k < j-1){
                        int spaceCount = spaceEach + (extra-- > 0 ? 1: 0);
                        line += string(spaceCount, ' ');
                    }
                }
            }
            res.push_back(line);
            i = j;
        }
        return res;
    }
};