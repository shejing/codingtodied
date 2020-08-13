/* 
 *给你两个二进制字符串，返回它们的和（用二进制表示）。

输入为 非空 字符串且只包含数字 1 和 0。

 

示例 1:

输入: a = "11", b = "1"
输出: "100"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-binary
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 *
 * */
class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int    len = max(a.length(), b.length());
        char   cnt = 0;
        for(int i=0; i<len; i++){
            cnt += (i<a.length()) ? (a[i]=='1') : 0;
            cnt += (i<b.length()) ? (b[i]=='1') : 0;
            res = ((cnt%2) ? '1' : '0') + res;
            cnt /= 2;
        }
        if(cnt==1) res = '1' + res;
        return res;
    }
};
