class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool>mp;
        for(auto i: nums1)
            mp[i] = true;
        vector<int>ans;
        for(int i=0; i<nums2.size(); i++){
            if(mp[nums2[i]] == true){
                ans.push_back(nums2[i]);
                mp[nums2[i]] = false;
            }
        }
        return ans;
    }
};
