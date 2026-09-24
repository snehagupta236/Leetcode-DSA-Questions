class Solution {
public:
    int digitsum(int n){
        int num = 0;
        while(n > 0){
            int lastdigit = n%10;
            n /= 10;
            num += lastdigit;
        }
        return num;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i == digitsum(nums[i]))return i;
        }
        return -1;
    }
};