class Solution {
public:
    int secondHighest(string s) {
        int mx = INT_MIN;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                mx = max(mx,s[i]-'0');
            }
        }
        
        
        int smx = INT_MIN;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                if(s[i]-'0' < mx){
                    smx = max(smx,s[i]-'0');
                }
            }
        }
        return (smx==INT_MIN) ? -1 : smx;
    }
};
