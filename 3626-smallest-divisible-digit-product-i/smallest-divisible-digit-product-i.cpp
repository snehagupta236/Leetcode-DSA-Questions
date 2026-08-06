class Solution {
public:
    int smallestNumber(int n, int t) {
        int number = n;
        while(true){
            int product = 1;
            int temp = number;
            while(temp){
            product *= temp%10;
              temp /= 10;
            }
           if(product % t== 0)
            return number;
            number++;
        }

    }
};