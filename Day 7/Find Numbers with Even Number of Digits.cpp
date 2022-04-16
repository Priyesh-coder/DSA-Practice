class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int ans = 0;
       for(auto it:nums){
           string s = to_string(it);
           if(s.length()%2==0)
               ans++;
       }
        return ans;
    }
};