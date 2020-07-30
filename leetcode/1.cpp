class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        int i,j;
        std::vector<int> res={0,0};
        for(i=0; i<len; i++)
          for(j=i+1; j<len; j++)
              if(nums[i]+nums[j]==target){
                  res[0]=i;
                  res[1]=j;        
                  break;
              }
        return res;
    }
};
