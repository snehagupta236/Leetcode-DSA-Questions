class Solution {
public:
void merge(vector<int>& nums , int low, int high, int mid){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
            left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
            right++;
    }
    int j = 0;

         for (int i = low; i <= high; i++) {
           nums[i] = temp[j];
        j++;
     }
}
void mergeSort(vector<int>& nums, int low, int high){
             if (low >= high)
            return;

         int mid = low + (high - low) / 2;

         mergeSort(nums, low, mid);

         mergeSort(nums, mid + 1, high);

         merge(nums, low, high,mid);
}
    
    vector<int> sortArray(vector<int>& nums) {
         mergeSort(nums, 0 , nums.size() - 1);
         return nums;
    }
};