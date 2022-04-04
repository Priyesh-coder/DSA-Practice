class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        int count = 0;
        for(int k=1; k<nums.size()-1;k++){
            if(nums[k] > nums[i] && nums[k] < nums[j]){
                count++;
            }
        }
        return count;
    }
};
