class Solution {
public:
    bool isPalindrome(int x) {
       if (x<0)
           return false;
       long resv  = 0;
       int  tmp   = x;
       while(x!=0){
           resv = resv*10 + x%10;
           x/=10;
       }
       if (resv==tmp)
           return true;
       else
           return false;
    }
};
