class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // if(pushed.size() != popped.size()){
        //     return false;
        // }

        // stack<int> s;

        // for(auto it: pushed){
        //     s.push(it);
        //     it++;
        // }

        // int j = 0;

        // while(!s.empty() && j < popped.size()){
        //     if(s.top() == popped[j]){
        //         return true;
        //     }
        //     s.pop();
        //     j++;
        // }
        // return false;

        stack<int> s;
        int j = 0;
        for(int i = 0; i< pushed.size(); i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};