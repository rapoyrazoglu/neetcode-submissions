class Solution {
public:
    bool isValid(string s) {
        std::stack<char> control;
        int size = std::ssize(s);
        if ((size%2)!=0) return false;
        std::unordered_map<char,char>twos{
            {'}','{'},
            {']','['},
            {')','('}
        };
        
        for(int i =0;i<size;++i)
        {
            char c = s[i];
            
            if(c=='['||c=='('||c=='{') {control.push(c);}
            else{
                if (control.empty()) return false;
                if (control.top() != twos[c]) return false;
                control.pop();
            }
            
        }
        
        return control.empty();


    }
};
