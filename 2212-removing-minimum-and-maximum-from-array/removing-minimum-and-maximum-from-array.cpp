class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = 0; 
        int mx = 0;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[mn]) {
                mn = i;
            }

            if (nums[i] > nums[mx]) {
                mx = i;
            }
        }


        int ans = INT_MAX;
        ans = min(ans, max(mn,mx) + 1);
        ans = min(ans , n- min(mn,mx));
        ans = min(ans, min(mn,mx) + 1 + n - max(mn, mx));
        return  ans;

    }
};