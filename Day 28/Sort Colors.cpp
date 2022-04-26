class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, mi = 0, hi = n-1;
        
        while(mi <= hi){
            switch(nums[mi]){
                    case 0:
                        swap(nums[mi],nums[lo]);
                        lo++, mi++;
                        break;
                    case 1:
                        mi++;
                        break;
                    case 2:
                        swap(nums[mi], nums[hi]);
                        hi--;
                        break;
                    
            }
        }
    }
};
