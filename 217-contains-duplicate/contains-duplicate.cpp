class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num : nums){
           if(mp[num] >= 1)
            return true;
            mp[num]++;
           
        }
        return false;
        // int n = nums.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; i++){
        //         if(nums[i] == nums[j])return true;
        //     }
        // }
        // return false;
       
    }
};