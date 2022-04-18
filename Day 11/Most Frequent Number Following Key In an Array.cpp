class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int>mp;
        int ans, freq=INT_MIN;
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i] == key)
                mp[nums[i+1]]++;
        
        for(auto it:mp)
            if(it.second>freq)
                ans = it.first, freq=it.second;
        
        return ans;
        
    }
};
