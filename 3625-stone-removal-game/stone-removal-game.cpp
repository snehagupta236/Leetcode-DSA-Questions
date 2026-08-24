class Solution {
public:
    bool canAliceWin(int n) {
        int count = 0;
        int stones = 10;
        while(n >= stones){
            n -= stones;
            stones--;
            count++;
        }
        if (count % 2 == 1) {
            return true;
            } else {
          return false;
          }
    }
};