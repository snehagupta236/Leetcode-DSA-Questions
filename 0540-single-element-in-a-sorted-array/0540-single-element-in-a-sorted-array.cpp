class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
       map<int, int>mp;
       for(int x: A){
        mp[x]++;
       }
       for(auto it: mp){
        if(it.second  == 1){
        return it.first;
        }
       }
       return -1;
}


    
};