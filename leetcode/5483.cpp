/* 
 第201场周赛 https://leetcode-cn.com/contest/weekly-contest-201/
 *给你一个由大小写英文字母组成的字符串 s 。

一个整理好的字符串中，两个相邻字符 s[i] 和 s[i + 1] 不会同时满足下述条件：

    0 <= i <= s.length - 2
    s[i] 是小写字符，但 s[i + 1] 是相同的大写字符；反之亦然 。

请你将字符串整理好，每次你都可以从字符串中选出满足上述条件的 两个相邻 字符并删除，直到字符串整理好为止。

请返回整理好的 字符串 。题目保证在给出的约束条件下，测试样例对应的答案是唯一的。

注意：空字符串也属于整理好的字符串，尽管其中没有任何字符。

 

示例 1：

输入：s = "leEeetcode"
输出："leetcode"
解释：无论你第一次选的是 i = 1 还是 i = 2，都会使 "leEeetcode" 缩减为 "leetcode" 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/make-the-string-great
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * */

//非递归写法
//使用栈的特性
class Solution {
public:
    string makeGood(string s) {
        std::stack<char> st;
        string res="";
        for(auto c : s){
            if(!st.empty() && (st.top()==c+32 || st.top()==c-32)){
                st.pop();
            }else{
                st.push(c);
            }
        }
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};
