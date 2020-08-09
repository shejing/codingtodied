/* 
 *给你两个正整数 n 和 k，二进制字符串  Sn 的形成规则如下：

    S1 = "0"
    当 i > 1 时，Si = Si-1 + "1" + reverse(invert(Si-1))

其中 + 表示串联操作，reverse(x) 返回反转 x 后得到的字符串，而 invert(x) 则会翻转 x 中的每一位（0 变为 1，而 1 变为 0）

例如，符合上述描述的序列的前 4 个字符串依次是：

    S1 = "0"
    S2 = "011"
    S3 = "0111001"
    S4 = "011100110110001"

请你返回  Sn 的 第 k 位字符 ，题目数据保证 k 一定在 Sn 长度范围以内。
 * */
#include<algorithm>

class Solution {
public:
    string invert(string& s){
        string res = "";
        for(int i=s.length()-1; i>=0; i--)
            res +=  s[i]=='0' ? '1' : '0';
        return res;
    }

    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=1; i<n; i++){
            s = s + "1" + invert(s);
        }
        return s[k-1];
    }
};
