class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size()-k;
        while(n){
            nums.erase(min_element(nums.begin(), nums.end()));
            n--;
        }
        return nums;
    }
};
