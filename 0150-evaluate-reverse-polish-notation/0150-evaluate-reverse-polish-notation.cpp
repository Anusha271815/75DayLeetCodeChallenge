class Solution {
public:
    int cal(int a, int b, string op) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        if (op == "/") return a / b; 
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        long int a,b;
        for(int i=0;i<tokens.size();i++){
            string ch=tokens[i];
            if(ch=="+"||ch=="-" || ch=="*" || ch=="/"){
                b=s.top();
                s.pop();
                a=s.top();
                s.pop();
                s.push(cal(a,b,ch));
            }
            else{
                s.push(stol(tokens[i]));
            }
           
        }
         return s.top();
    }
};