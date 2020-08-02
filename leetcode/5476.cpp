/* 
 *给你一个由 不同 整数组成的整数数组 arr 和一个整数 k 。

每回合游戏都在数组的前两个元素（即 arr[0] 和 arr[1] ）之间进行。比较 arr[0] 与 arr[1] 的大小，较大的整数将会取得这一回合的胜利并保留在位置 0 ，较小的整数移至数组的末尾。当一个整数赢得 k 个连续回合时，游戏结束，该整数就是比赛的 赢家 。

返回赢得比赛的整数。

题目数据 保证 游戏存在赢家。
 * */
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int len    = arr.size();
        int res    = 0;
        int count  = 0;
        int index1 = 0;
        int index2 = 1;
        k = k<len ? k : len;
        while(count<k){
            if(arr[index1]>arr[index2]){
                count++;
                res = arr[index1];
                int tmp = arr[index1];
                arr[index1] = arr[index2];
                arr[index2] = tmp;
            }else{
                res = arr[index2];
                count = 1;
            }
            index1 = (index1+1)%len;
            index2 = (index2+1)%len;

        }
        return res;
    }
};
