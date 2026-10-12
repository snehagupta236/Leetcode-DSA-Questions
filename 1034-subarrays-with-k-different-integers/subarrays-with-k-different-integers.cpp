class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int ans1 = 0;
        int ans2 = 0;
        unordered_map<int,int>freq;
        for(int right = 0; right<n; right++){
            freq[nums[right]]++;

            while(freq.size() > k){
                 freq[nums[left]]--;
                 if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }

                 left++;
            }

            ans1 += right - left + 1;
        }
        left  = 0;
      
          freq.clear();
        for(int right = 0; right<n; right++){
            freq[nums[right]]++;

            while(freq.size() > k-1){
                 freq[nums[left]]--;
                 if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }

                 left++;
            }

            ans2 += right - left + 1;
        }
        
        return ans1-ans2;
    }
};