class Solution {
public:
    int maximum69Number (int num) {
        // string s = to_string(num);

        // for(int i = 0; i< s.length(); i++){
        //     if(s[i] == '6'){
        //         s[i] = '9';
        //         break;
        //     }
        // }
        // return stoi(s);
        
        int placeValue = 0, first_six = -1;

        int temp = num;

        while(temp > 0){
            int rem = temp % 10;

            if(rem == 6){
                first_six = placeValue;
            }
            temp = temp/10;
            placeValue++;
        }

        if(first_six == -1){
            return num;
        }

        return num + 3 * pow(10, first_six);

    }
};