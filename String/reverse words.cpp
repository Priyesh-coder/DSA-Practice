class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        S += ".";
        stack<string>st;
        string str="";
        for(int i=0; i<S.size();i++){
            if(S[i] == '.'){
                st.push(str);
                str="";
            }else{
                str = str+S[i];
            }
        }
        string ans = "";
        while(st.size() != 1){
            ans = ans+st.top()+".";
            st.pop();
        }
        ans = ans+st.top();
        return ans;
    } 
};