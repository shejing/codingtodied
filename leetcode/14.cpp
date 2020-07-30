class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.size() == 0){
             return "";
         }
         string res = strs[0];
         for(string s : strs){
             res = CommonPrefix(res,s);
         }
         return res;
    }

    string CommonPrefix(string s1, string s2){
         if(s1.length()==0 || s2.length()==0)
             return "";
         int len = max(s1.length(), s2.length());
         int index = 0;
         for(int i=0; i<len; i++){
             if(s1[i]==s2[i])
                 index++;
             else
                 break;
         }
         return s1.substr(0,index);
    }
};
