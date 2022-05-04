class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(auto cur: nums){
            int complement = k-cur;
            if(mp[complement] > 0){
                ans++;
                mp[complement]--;
            }
            else mp[cur]++;
        }
        return ans;
    }
};
