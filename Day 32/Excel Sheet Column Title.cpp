class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n){
            char c = (n-1)%26 + 'A';
            res = c + res;
            n = (n-1)/26;
        }
        return res;
    }
};
