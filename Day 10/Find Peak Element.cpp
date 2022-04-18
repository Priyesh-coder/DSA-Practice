class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, hi = n-1, mid;
        if(nums.size() == 1)
            return 0;
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(mid>0 and mid<n-1 ){
                if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
                    return mid;
                else if(nums[mid] < nums[mid-1])
                    hi = mid-1;
                else
                    lo = mid+1;
            } else if(mid==0){
                if(nums[mid] > nums[mid+1])
                    return mid;
                else
                    lo = mid+1;
                    
            }else if(mid == n-1){
                if(nums[n-1] > nums[n-2])
                    return n-1;
                else hi = mid-1;
            }
        }
        return -1;
    }
};
