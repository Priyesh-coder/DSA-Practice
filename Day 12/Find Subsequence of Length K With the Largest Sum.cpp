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


// Alternate Solution...

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
         vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push({nums[i], i});
        if (pq.size() > k)
            pq.pop();
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < ans.size(); i++)
        ans[i] = nums[ans[i]];
    
    return ans;
    }
};
