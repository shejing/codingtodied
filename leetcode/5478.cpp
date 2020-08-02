/* 
 * 你有两个 有序 且数组内元素互不相同的数组 nums1 和 nums2 。

一条 合法路径 定义如下：

    选择数组 nums1 或者 nums2 开始遍历（从下标 0 处开始）。
    从左到右遍历当前数组。
    如果你遇到了 nums1 和 nums2 中都存在的值，那么你可以切换路径到另一个数组对应数字处继续遍历（但在合法路径中重复数字只会被统计一次）。

得分定义为合法路径中不同数字的和。

请你返回所有可能合法路径中的最大得分。

由于答案可能很大，请你将它对 10^9 + 7 取余后返回。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/get-the-maximum-score
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处
 * */
class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        long sum1=0, sum2=0;
        long res=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                res = res + max(sum1,sum2) + nums1[i];
                sum1=0;
                sum2=0;
                i++;j++;
            }else if(nums1[i]<nums2[j]){
                sum1+=nums1[i];
                i++;
            }else{
                sum2+=nums2[j];
                j++;
            }
        }
        while(i<nums1.size()) sum1+=nums1[i++];
        while(j<nums2.size()) sum2+=nums2[j++];
        res += max(sum1,sum2);
        return res%(1000000007);
    }
};
