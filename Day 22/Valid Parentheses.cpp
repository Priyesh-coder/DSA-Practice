class Solution {
public:
    bool isValid(string s) {
        stack<char>mystack;
        for(auto ch:s){
            if(ch=='(' || ch=='[' || ch=='{')
                mystack.push(ch);
            else if(ch==')' && mystack.size() && mystack.top() == '(')
                mystack.pop();
            else if(ch==']' && mystack.size() && mystack.top() == '[')
                mystack.pop();
            else if(ch=='}' && mystack.size() && mystack.top() == '{')
                mystack.pop();
            else return false;
        }
        return mystack.empty();
    }
};
