class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        int res = 0,bit = 0;
        int max = 2147483647,max_division_10 = 214748364;
        int min = -2147483648,min_division_10 = -214748364;
        while (x) {
            if (!flag && x%10==0) {
                x /= 10;
                continue;
            }
            flag = true;
            res = res*10+x%10;
            x /= 10;
            bit++;
            if (bit == 9 && x) {
                if ( (res > max_division_10) || ((res == max_division_10)&&(x%10>7))) {
                    return 0;
                }
                if ( (res < min_division_10) || ((res == min_division_10)&&(x%10<-8)) ) {
                    return 0;
                }
            }
        }
        return res;
    }
};