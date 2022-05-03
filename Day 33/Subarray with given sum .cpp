class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>ans;
        long long cur_sum = 0;
        int start = 0;
        int i = 0;
        while(cur_sum != s && start<n){
            cur_sum += arr[i];
            i++;
            
            while(cur_sum > s){
                cur_sum -= arr[start];
                start++;
            }
        }
        if(cur_sum == s){
            ans.push_back(start+1);
            ans.push_back(i);
            return ans;
        }
        ans.push_back(-1);
        return ans;
    }
};
