class Solution {
public:
    // int digitsum(int n){
    //     int num = 0;
    //     while(n > 0){
    //         int lastdigit = n%10;
    //         n /= 10;
    //         num += lastdigit;
    //     }
    //     return num;
    // }
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            int sum = 0;
            while(x > 0){
                int last = x%10;
                x /= 10;
                sum += last;
            }
            if(i == sum)return i;
            // if(i == digitsum(nums[i]))return i;
        }
        return -1;
    }
};