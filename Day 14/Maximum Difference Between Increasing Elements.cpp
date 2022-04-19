class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int curr_min = INT_MAX;
        int maxi = -1;
        for(int i=0; i<nums.size(); i++){
            curr_min = min(curr_min,nums[i]);
            maxi = max(maxi, nums[i]-curr_min);
        }
        if(maxi == 0)
            return -1;
        return maxi;
    }
};
