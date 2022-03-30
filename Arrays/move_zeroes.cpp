class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[j++],nums[i]);
            }
        }
    }
};

// Second Approach---
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n = nums.size();
       if(n==0 || n==1) return;
       int left=0, right=0;
       int temp;
       while(right<n){
         if(nums[right]==0){
           right++;
         }else{
           temp = nums[left];
           nums[left] = nums[right];
           nums[right] = temp;
           left++;
           right++;
         }
       }
    }
};
