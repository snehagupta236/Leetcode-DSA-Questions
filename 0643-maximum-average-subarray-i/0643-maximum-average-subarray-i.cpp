class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int sum = 0;
        int maxsum = INT_MIN;
        for(int right = 0; right < nums.size(); right++){ // add right;
            sum += nums[right];
            

            if(right-left+1 > k){ // remove left
               sum -= nums[left];
               left++;
            }
            if(right-left + 1 == k) { //ans update;
             maxsum = max(maxsum , sum);
            
            }
        }
            double ans = double(maxsum) / k; 
            return ans;
    }
};