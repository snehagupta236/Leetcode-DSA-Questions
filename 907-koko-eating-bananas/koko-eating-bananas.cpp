class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //    int maxi = *max_element(piles.begin() , piles.end());
    //    for(int k=1; k<=maxi; k++){
    //     long long hours = 0;
    //     for(int i=0; i<piles.size(); i++){
    //         hours += (piles[i] + k -1)/k;
    //     }
    //     if(hours <= h){
    //         return k;
    //     }
    //    }
    //    return -1;
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    while(low <= high){
        int mid = low + (high-low)/2;
        long long hours = 0;
        for(int i=0; i<piles.size(); i++){
            hours += (piles[i] + mid -1)/mid;
        }
        if(hours <= h){
            high = mid-1;
        }else{
            low = mid+1;
        }

    }
    return low;
    
    }
};