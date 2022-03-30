class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        for(auto it:nums)
            s.insert(it);
        for(int i=1; i<=nums.size();i++)
            if(s.find(i) != s.end())
                continue;
            else ans.push_back(i);
        return ans;
    }
};
