/* 
 * num1 和num2 的长度都小于 5100.
num1 和num2 都只包含数字 0-9.
num1 和num2 都不包含任何前导零。
你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1 = num1.length()-1;
        int index2 = num2.length()-1;
        string res="";
        int tmp   = 0;
        while(index1>=0 && index2>=0){
            char c1 = num1[index1];
            char c2 = num2[index2];
            int  sum = c1+c2-2*'0' + tmp;
            tmp  = sum/10;
            res  = (char)(sum%10 + '0') + res;

            index1--;
            index2--;
        }
        while(index1>=0){
            int sum = num1[index1] + tmp - '0';
            tmp = sum/10;
            res = (char)(sum%10 + '0') + res;
            index1--;
        }
        while(index2>=0){
            int sum = num2[index2] + tmp - '0';
            tmp = sum/10;
            res = (char)(sum%10 + '0') + res;
            index2--;
        }
        cout<<tmp<<endl;
        if(tmp!=0) res = (char)(tmp+'0') + res;
        return res;
    }
};
