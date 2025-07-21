class Solution {
public:
    int minOperations(vector<string>& logs) {
        // int depth = 0;

        // for(auto it: logs){
        //     if(it == "../"){
        //         depth--;
        //         if(depth < 0){
        //         depth = 0;
        //         }
        //     }
        //     else if(it == "./"){
        //         continue;
        //     }
        //     else{
        //         depth++;
        //     }
        // }
        // return depth;

        stack<string> s;

        for(auto it: logs){
            if(it == "../"){
                if(!s.empty()){
                    s.pop();
                }
            }
            else if(it == "./"){
                continue;
            }
            else{
                s.push(it);
            }
        }
        return s.size();
    }
};