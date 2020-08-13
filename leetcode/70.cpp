/*
 * 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。

示例 1：

输入： 2
输出： 2
解释： 有两种方法可以爬到楼顶。
1.  1 阶 + 1 阶
2.  2 阶

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/climbing-stairs
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
class Solution {
public:
//直接使用递归会超时间
    int climbStairs(int n) {
         if(n==1) return 1;
         if(n==2) return 2;
         return climbStairs(n-1) + climbStairs(n-2);
     }
//动态规划的方法
    int climbStairs(int n) {
        int res = 1;
        int f0  = 1;
        int f1  = 1;
        for(int i=1; i<n; i++){
            res = f0 + f1;
            f0  = f1;
            f1  = res;
        }
        return res;
    }
};
