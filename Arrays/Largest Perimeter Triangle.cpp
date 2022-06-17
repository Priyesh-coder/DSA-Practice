class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans = 0,per;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-2; i++){
            if(nums[i]+nums[i+1] > nums[i+2]){
                per=nums[i]+nums[i+1]+nums[i+2];
                if(per>ans){
                    ans = per;
                }
            }
        }
        return ans;
    }
};
