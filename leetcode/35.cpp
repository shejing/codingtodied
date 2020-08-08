/* 
 *给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。
 * */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end   = nums.size()-1;
        int mid   = 0;
        while(start<=end){
            //if (target >= nums[end]) return end+1;
            mid = (end + start )/2;
            if(target>nums[mid])
                start = mid + 1;
            else if(target<nums[mid])
                end   = mid - 1;
            else
                return mid;
        }
        return start;
    }
};
