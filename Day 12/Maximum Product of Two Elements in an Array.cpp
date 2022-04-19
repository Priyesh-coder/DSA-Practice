class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto it:nums)
            pq.push(it);
        
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        
        return (a-1)*(b-1);
    }
};

// Alternate Solution...
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int num1,num2, index, n = nums.size();
        num1=num2=0;
        for(int i=0;i<n;i++){
            if(nums[i]>num1)
            {
                num1=nums[i];
                index=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=index)
            num2=max(num2,nums[i]);
        }
        return (num1-1)*(num2-1);
    }
};
