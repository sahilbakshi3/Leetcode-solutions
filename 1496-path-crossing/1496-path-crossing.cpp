class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;

        unordered_set<string> st;
        st.insert("0,0");

        for(auto &it: path){
            if(it == 'N') y++;
            else if(it == 'S') y--;
            else if(it == 'E') x++;
            else if(it == 'W') x--;

            string s = to_string(x) + ',' + to_string(y);

            if(st.count(s)){
                return true;
            }

            st.insert(s);

        }

        return false;
    }
};