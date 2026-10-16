class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left   = 0;
        for(int right = 0; right<=nums.size()-1; right++){
            if(nums[right] != 0){
                swap(nums[left] , nums[right]);
                left++;
            }
        }
        
    }
};