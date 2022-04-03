class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(stoi(s[i]));
            }else if(s[i] == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y);
                st.push(x);
                st.push(x+y);
            } else if(s[i] == "C"){
                st.pop();
            } else if(s[i] == "D"){
                int x = st.top();
                st.pop();
                st.push(x);
                st.push(2*x);
            } else{
                st.push(stoi(s[i]));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
