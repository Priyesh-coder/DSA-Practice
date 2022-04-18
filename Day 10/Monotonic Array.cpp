class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool decrease = true;
        bool increase = true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1])
                decrease = false;
            
            else if(nums[i] > nums[i+1])
                increase = false;
            
            if(increase==false && decrease==false)
                return false;
        }
        return true;
    }
};
