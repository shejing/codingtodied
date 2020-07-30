class Solution {
public:
    int romanToInt(string s) {
        std::map<char,int> table = { {'I',1},
                                     {'V',5},
                                     {'X',10},
                                     {'L',50},
                                     {'C',100},
                                     {'D',500},
                                     {'M',1000}
                                    };
        int res = 0;
        size_t len = s.length();
        char pre = s[len-1];
        for(int i=len-1; i>=0; i--){
            char c = s[i];
            cout << c << pre << endl;
            if(table[c]<table[pre])
                res -= table[c];
            else
                res += table[c];
            pre = c;
        }
        return res;   
    }
};
