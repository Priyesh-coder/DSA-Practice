class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>minH;
        for(int i=0; i<k; i++){
            for(int j=0; j<k; j++){
                minH.push(arr[i][j]);
            }
        }
        while(!minH.empty()){
            ans.push_back(minH.top());
            minH.pop();
        }
        return ans;
    }
};
