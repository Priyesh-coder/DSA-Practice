class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxx = INT_MIN;
        int store,size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i] > maxx){
                maxx = nums[i];
                store = i; 
            }
        }

        for(int i=0;i<size;i++){
            if(2*nums[i] > maxx && nums[i] != maxx){
                return -1;
            }
        }
        
        return store;
    }
};
