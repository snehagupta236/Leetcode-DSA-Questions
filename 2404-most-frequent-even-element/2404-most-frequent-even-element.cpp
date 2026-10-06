class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
                int n = nums.size();
        int ans = -1, maxCount = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) continue;     

            int cnt = 0;
            for (int j = 0; j < n; j++) {         
                if (nums[j] == nums[i]) cnt++;
            }

            if (cnt > maxCount || (cnt == maxCount && nums[i] < ans)) {
                maxCount = cnt;
                ans = nums[i];
            }
        }
        return ans;
    
    }
};