class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        for(vector<int>::iterator it = nums.begin();it!=nums.end()-1;it++)  
        {  
           if (*it == *(it+1)) {
                it = nums.erase(it) - 1;
            }
        }  
        
        return nums.size();
    }
};