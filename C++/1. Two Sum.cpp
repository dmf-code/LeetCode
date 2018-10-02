class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool flag = true;
        int i,j;
        vector<int> ve;
        for(i=0;i<nums.size()&&flag;i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    flag = false;
                    ve.push_back(i);
                    ve.push_back(j);
                    break;
                }                
            }
        }
        return ve;
    }
};