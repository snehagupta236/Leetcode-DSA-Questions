class Solution {
public:
  bool solve(int idx, int target, vector<int>& arr,vector<vector<int>>& dp) {
           if(target == 0)
               return true;

           if(idx == 0)
               return arr[0] == target;
               
               if(dp[idx][target] != -1)
                           return dp[idx][target];

           bool nottake = solve(idx - 1, target, arr,dp);

           bool take = false;

           if(arr[idx] <= target)
               take = solve(idx - 1, target - arr[idx], arr , dp);

           return dp[idx][target] = take || nottake;
       }

    bool canPartition(vector<int>& arr) {
           int n = arr.size();
           int total = 0;

        for(int x : arr)
            total += x;

        if(total % 2 != 0)
            return false;

        int target = total / 2;

           vector<vector<int>> dp(n, vector<int>(target + 1, -1));
           return solve(n - 1, target, arr,dp);
    }
};