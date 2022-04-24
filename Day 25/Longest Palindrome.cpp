class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char c: s) mp[c]++;
        
        int ans = 0, isOdd = 0;
        for(auto [ch,cnt] : mp){
            ans += (cnt/2)*2;
            if(cnt%2 != 0)
                isOdd = 1;
        }
        return ans + isOdd;
    }
};
