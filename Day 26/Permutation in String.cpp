// Same as find all anagram in a string...
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1hash(26,0);
        vector<int>s2hash(26,0);
        int len = s2.size();
        int window = s1.size();
        
        if(len < window) return false;
        
        int left = 0, right = 0;
        
        while(right<window){
            s1hash[s1[right]-'a'] += 1;
            s2hash[s2[right++]-'a'] += 1;
        }
        right -= 1;
        
        while(right < len){
            if(s1hash == s2hash) return true;
            right += 1;
            if(right != len)
                s2hash[s2[right] - 'a'] += 1;
            s2hash[s2[left] - 'a'] -= 1;
            left += 1;
        }
        return false;
    }
};
