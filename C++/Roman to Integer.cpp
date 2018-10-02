class Solution {
public:
    int romanToInt(string s) {
        //int I = 1,V = 5,X = 10,L = 50,C = 100,D = 500,M = 1000;
        int idx = 0,slen = s.length(),val = 0;
        int m[1000];
        for (int i=0;i<slen;++i) {
            switch(s[i]) {
                case 'I':
                    m[i] = 1;
                    break;
                case 'V':
                    m[i] = 5;
                    break;
                case 'X':
                    m[i] = 10;
                    break;
                case 'L':
                    m[i] = 50;
                    break;
                case 'C':
                    m[i] = 100;
                    break;
                case 'D':
                    m[i] = 500;
                    break;
                case 'M':
                    m[i] = 1000;
                    break;
            } 
            if (i - 1 >= 0 && m[i-1] < m[i]) {
                m[i-1] *= -1;
            }
        }
        for (int i=0;i<slen;++i) {
            val += m[i];
        }
        return val;
        
    }
};