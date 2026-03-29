class Solution {
public:
    bool isValid(string s) {
        vector <char>arr;
        if(s.size()<2) return false;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                arr.push_back(c);
            }else{
                if(arr.empty()) return false;
                char top = arr.back();    
                if ((top == '(' && c == ')') ||
                    (top == '[' && c == ']') ||
                    (top == '{' && c == '}')) {
                    arr.pop_back();
                } else {
                    return false;
                }
            }
        }
        if(arr.size()>0) return false;
        return true;
    }
};