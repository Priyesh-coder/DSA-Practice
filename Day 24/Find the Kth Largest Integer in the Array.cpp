class Solution {
public:
    static bool myComp(string a, string b){
        if(a.length() == b.length()) return a>b;
        return a.length() > b.length();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), myComp);
        return nums[k-1];
    }
};


// Alternate ---- Using Priority Queue
class Solution {
public:
   struct cmp
    {
        bool operator()(const string &a, const string &b)
        {
            return a.length()==b.length() ? (a>b) : a.length()>b.length();
        }    
    };
    
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, cmp>pq;
        
        for(auto it:nums)
            pq.push(it);
        
        while(pq.size() > k){
            pq.pop();
        }
        return pq.top();
    }
};
