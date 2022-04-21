class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0) nums[i] = -1;
        }
        
        int presum = 0, res = 0;
        for(int i=0; i<n; i++)
        {
            presum += nums[i];
            if(presum==0) res=i+1;
            if(mp.find(presum)==mp.end())
                mp.insert({presum, i});
            if(mp.find(presum) != mp.end())
                res = max(res, i-mp[presum]);
        }
        return res;
    }
};
