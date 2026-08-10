class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        //  long long t = 1;

        // while(true) {

        //     long long trips = 0;

        //     for(int i = 0; i < time.size(); i++) {
        //         trips += t / time[i];

        //         if(trips >= totalTrips)
        //             return t;
        //     }

        //     t++;
        // }
         long long low = 1;
        long long high = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;
         long long ans  = high;
         while(low <= high){
            long long  mid = low + (high-low) / 2;
            long long trips = 0;
            for(int t:time){
                trips += mid/t;

                if(trips >= totalTrips)break;
            }
            if(trips >= totalTrips){
                ans= mid;
                high = mid-1;

            }else{
                low = mid+1;
            }
         }
         return ans;
    }
};