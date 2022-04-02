class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
