class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int> nums, int index){
        if(index== nums.size()){
            ans.push_back(nums);
            return;
        }else{
            for(int i=index; i<nums.size(); i++){
                swap(nums[i], nums[index]);
                helper(nums,index+1);
                swap(nums[i], nums[index]);

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==0) return ans;
        int idx = 0;
        helper(nums,idx);
        return ans;
    }
};