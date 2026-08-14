class Solution {
public:
    int maximumLengthSubstring(string s) {
        int length = 0;
        for(int i=0; i<s.size(); i++){
            unordered_map<char,int>freq;
            for(int j=i; j<s.size(); j++){
                freq[s[j]]++;

                if(freq[s[j]] > 2)break;

                length = max(length , j-i+1);
            }
        }
        return length;
    }
};