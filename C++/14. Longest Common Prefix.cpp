class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string res;
        for (vector<string>::iterator it=strs.begin();it!=strs.end();it++) {
            string str = *it;
            int len = str.length();
            if (!len) {
                res = "";
                break;
            }
            if (it == strs.begin()) {
                res = *it;
            } else {
                for (int i=0;i<len;++i) {
                    if (res[i] != str[i]) {
                        res.resize(i);
                        break;
                    }
                    if (i+1 == len) {
                        res.resize(i+1);
                        break;
                    }
                }
            }
        }
        
        return res;
    }
};