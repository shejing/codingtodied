/*
 *实现 strStr() 函数。

给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/implement-strstr
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * */
class Solution {
public:
    int strStr(string haystack, string needle) {
        int subLen = needle.length();
        int mainLen = haystack.length();
        if(mainLen==0 && subLen==0)  return 0;
        if(mainLen==0) return -1;
        if(subLen==0) return 0;
        for (int i=0; i<mainLen-subLen+1; i++){
            int index = 0;
            for(; index<subLen; index++)
                if(haystack[i+index] != needle[index]) break;
            if(index==subLen) return i;
        }
        return -1;
    }
};
