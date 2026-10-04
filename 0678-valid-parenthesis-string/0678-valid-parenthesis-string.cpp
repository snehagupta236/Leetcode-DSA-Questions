class Solution {
public:
    bool checkValidString(string s) {
         int i=0;
        int j = 0;
        for(char ch : s){
            if(ch == '('){
             i++;
            j++;
            }else if(ch == ')'){
                i--;
                j--;
            }else{
                i--;
                j++;
            }
        
            if(j < 0)return false;
            if(i < 0)i = 0;
        }    
        return i == 0;
    }
};