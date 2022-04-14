class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        int n = nums.size();
        for(int i=0; i<n ;i++){
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        
        int i=0, j=0;
        for(int k=0; k<n; k++){
            if(k%2==0)
                nums[k] = even[i++];
            else
                nums[k] = odd[j++];
        }
        return nums;
    }
};
