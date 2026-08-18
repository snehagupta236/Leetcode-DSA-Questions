class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
         int n = nums.size();
        unordered_map<int,int>freq;
        for(int i=0; i<= n-k; i++){
            unordered_map<int,int>mp;

            for(int j=i; j<i+k; j++){
                mp[nums[j]]++;
            }

        for(auto it: mp){
            freq[it.first]++;
        }
        }
        int ans = -1;
        for(auto it: freq){
            if(it.second == 1){
                ans = max(ans , it.first);
            }
        }
        return ans;
    }
};