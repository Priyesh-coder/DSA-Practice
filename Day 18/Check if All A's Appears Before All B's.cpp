class Solution {
public:
    bool checkString(string s) {
        for(int i=0; i<s.length(); i+=1){
            if(s[i] == 'b' && s[i+1] == 'a')return false;
        }
        return true;
    }
};
