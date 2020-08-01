class Solution {
public:
    bool isValid(string s) {
        if (s.length() <=0) return true;
        std::stack<char> chStack;
        for(char c : s){
            if(c=='(' || c=='[' || c=='{')
                chStack.push(c);
            else{
                if (chStack.empty()) return false;
                char c1 = chStack.top();
                chStack.pop();
                switch(c1){
                    case '(' : if (c!=')') return false; break;
                    case '[' : if (c!=']') return false; break;
                    case '{' : if (c!='}') return false; break;
                    default  :
                         return false;
                }
                }
        }
        if (chStack.empty()) 
            return true;
        else
            return false;
    }
};
