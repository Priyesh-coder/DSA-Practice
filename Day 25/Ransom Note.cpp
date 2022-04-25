class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>mp;
        for(char c: magazine)
            mp[c]++;
        
        for(char ch : ransomNote){
            mp[ch]--;
        }
        
        for(auto it:mp){
            if(it.second < 0) return false;
        }
        return true;
    }
};
