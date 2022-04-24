class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        
        priority_queue<pair<int,int>>pq;
        for(auto val:mp)
            pq.push({val.second,val.first});
        
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
