class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int> nums, int l, int r, set<vector<int>> &interim){
        if(l==r){
            interim.insert(nums);
            return;
        }
        for(int i=l; i<=r; i++){
                swap(nums[i], nums[l]);
                helper(nums,l+1,r,interim);
                swap(nums[i], nums[l]);

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> interim;
		vector<vector<int>> ans;
        helper(nums, 0,nums.size()-1,interim);
        for (auto v : interim)
			ans.push_back(v);
		return ans;
    }
};