class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it;
        int idx = 0;
        for (it = nums.begin(); it != nums.end(); it++) {
            if (*(it) >= target) {
                return idx;
            }
            idx++;
        }
        return idx;
    }
};