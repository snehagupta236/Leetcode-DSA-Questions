class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1 , res2;
        for(char ch1 : s){
             if(ch1 == '#'){
                 if(!res1.empty())
                res1.pop_back();
             }else{
                res1 += ch1;
             }
        }
        for(char ch2 : t){
             if(ch2 == '#'){
                 if(!res2.empty())
                res2.pop_back();
             }else{
                res2 += ch2;
             }
        }
         if(res1 == res2)return true;
        return false;
    }
};