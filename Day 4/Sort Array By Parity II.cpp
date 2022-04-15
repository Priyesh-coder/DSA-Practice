class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd,even;
        int n = nums.size();
        for(int i=0; i<n; i++)
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        int i=0, j=0;
        for(int k=0; k<n; k++)
            if(k%2==0)
                nums[k] = even[i++];
            else
                nums[k] = odd[j++];
        
        return nums;
    }
};
