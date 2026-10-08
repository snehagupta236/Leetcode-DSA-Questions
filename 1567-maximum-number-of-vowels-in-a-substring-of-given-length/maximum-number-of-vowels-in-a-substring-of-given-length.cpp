class Solution {
public:
   bool isvowel(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
   }
    int maxVowels(string s, int k) {
        int left = 0;
        int count= 0;
        int ans = 0;
        for(int right = 0; right<s.length(); right++){
            if(isvowel(s[right]))count++;

             

            if(right-left + 1 == k){
               ans = max(ans , count);

               if(isvowel(s[left]))count--;
            left++;
            }
        }
        return ans;
    }
};