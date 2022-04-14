class Solution {
public:
    int largestInteger(int num) {
       string s = to_string(num);
        vector<char>odd,even;
       for(int i=0; i<s.size(); i++)
           if((s[i]-'0')%2) odd.push_back(s[i]);
           else even.push_back(s[i]);
        
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
        sort(even.begin(),even.end());
        reverse(even.begin(),even.end());
        
        string ans;
        int i=0, j=0;
        for(int k=0; k<s.size(); k++){
            if((s[k]-'0')%2) ans += odd[i++];
            else ans += even[j++];
        }
        return stoi(ans);
    }
};
