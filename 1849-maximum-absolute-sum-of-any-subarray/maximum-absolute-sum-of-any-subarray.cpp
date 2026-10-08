class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxend = 0;
        int minend = 0;
        int maxsum = 0;
        int minsum = 0;
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            maxend = max(nums[i] , maxend + nums[i]);
            minend = min(nums[i] , minend+ nums[i]);

            maxsum = max(maxsum , maxend);
            minsum = min(minsum , minend);

            res = max(maxsum , abs(minsum));

        }
        return res;
        
    }
};