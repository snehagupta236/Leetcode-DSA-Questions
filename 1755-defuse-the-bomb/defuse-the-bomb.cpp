class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n  = code.size();
        vector<int>ans(n);
        for(int i=0; i<n; i++){
            for(int j=1; j <= abs(k); j++){
                if(k > 0){
                    ans[i] += code[(i+j) % n];
                }
                    else{
                          ans[i] += code[(i-j+n)%n];
                    }
                
            }
        }
        return ans;
    }
};