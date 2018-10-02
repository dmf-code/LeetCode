class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {
            return false;
        }
        int res = 0,xx = x;
        while (xx) {
            res = res*10 + xx%10;
            xx /= 10;
        }
        if (res == x)return true;
        return false;
    }
};