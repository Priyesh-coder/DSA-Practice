class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0,j=n; i<n; i++,j++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
        return ans;
    }
};

// Alternate Solution...
int len = nums.size();
        vector<int> ans(len);
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<len;)
            {
                ans[k++] = nums[j];
                j += n;
            }
        }
        return ans;
