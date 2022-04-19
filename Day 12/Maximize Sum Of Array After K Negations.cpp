class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int temp,sum=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it:nums)
            pq.push(it);
        
        while(k>0){
            temp = -1*pq.top();
            pq.pop();
            pq.push(temp);
            k--;
        }
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
    }
};
