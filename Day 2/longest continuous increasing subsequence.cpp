class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int count=1;
        int res=1;
        int i=0;
        for(int j=1; j<n; j++){
            if(nums[i] < nums[j]){
                count++;
                res = max(count,res);
            }else{
                count = 1;
            }
            i++;
        }
        res = max(res,count);
        return res;
    }
};