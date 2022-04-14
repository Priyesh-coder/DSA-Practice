class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0; i<n; i++)
            if(nums[i]%2==0)
                ans.push_back(nums[i]);
        for(int i=0 ;i<n ;i++)
            if(nums[i]%2!=0)
                ans.push_back(nums[i]);
        
        return ans;
    }
};

// Alternate Method...
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        
        while (l < r) {
            // skip even numbers from left
            // until an odd number is found
            while (l < r && nums[l] % 2 == 0) l++;
            // skip odd numbers from right
            // until an even number is found
            while (l < r && nums[r] % 2 != 0) r--;
            
            // now swap the numbers
            swap(nums[l], nums[r]);
            // loop until all numbers have been exhausted
            l++, r--;
        }
        
        return nums;
    }
};
