class Solution {
public:
    int findMagicIndex(vector<int>& nums) {
        int result = -1;
        for(int i = 0; i<nums.size(); i++)
            if (nums[i] == i) return i;
        return -1;
    }
};
