# 剑指 Offer 53 - II. 0～n-1中缺失的数字
一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

**示例**
>> 输入：[0,1,3]
>> 输出：2

```C++
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int mid   = 0;
        while(start<=end){
            mid = (start + end)/2;
            if(mid == nums[mid]) start = mid+1;
            else end = mid-1;
        }
        return start;
    }
};
```
