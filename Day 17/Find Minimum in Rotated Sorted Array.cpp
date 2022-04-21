class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        for(auto num:nums)
            if(mini>num)
                mini = num;
        
        return mini;
    }
};
