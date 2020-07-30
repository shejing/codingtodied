class Solution {
public:
    int reverse(int x) {
       long res = 0, bit = 10;
       while(x!=0){
           res = (x%10) + res*bit;
           x/=10;
       }
       if (res > INT_MAX || res < INT_MIN)
           return 0;
       else
           return res;
    }
};
