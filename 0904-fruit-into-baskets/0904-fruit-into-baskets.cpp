class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int len = 0;
        int left = 0;
        unordered_map<int,int>mp;
        for(int right = 0; right < n; right++){
            mp[fruits[right]]++;
        
        while(mp.size() > 2){
           mp[fruits[left]]--;
          if(mp[fruits[left]]==0)
                    mp.erase(fruits[left]);

                    left++;
           }    
        
        len = max(len , right-left+1);
    }
    return len;
    }
};