/* 
 *给定一个正整数 n（1 ≤ n ≤ 30），输出外观数列的第 n 项。

注意：整数序列中的每一项将表示为一个字符串。

「外观数列」是一个整数序列，从数字 1 开始，序列中的每一项都是对前一项的描述。前五项如下：

1.     1
2.     11
3.     21
4.     1211
5.     111221

第一项是数字 1

描述前一项，这个数是 1 即 “一个 1 ”，记作 11

描述前一项，这个数是 11 即 “两个 1 ” ，记作 21

描述前一项，这个数是 21 即 “一个 2 一个 1 ” ，记作 1211

描述前一项，这个数是 1211 即 “一个 1 一个 2 两个 1 ” ，记作 111221

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/count-and-say
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * */
//直接模拟
class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int i=1; i<n; i++){
            string tmp = "";
            int    count = 1;
            char   pre   = res[0];
            for(int j=1; j<res.length(); j++){
                if(res[j]==pre){
                    count++;
                }else{
                    tmp += to_string(count);
                    tmp += pre;
                    pre =  res[j];
                    count = 1;
                }
            }
            tmp += to_string(count);
            tmp += pre;
            res = tmp;
        }
        return res;
    }
};
