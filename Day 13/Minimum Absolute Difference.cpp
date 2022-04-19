class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;
        for(int i=1; i<arr.size(); i++){
            mini = min(mini,arr[i]-arr[i-1]);
        }
        vector<vector<int>>res;
        for(int i=1; i<arr.size(); i++)
            if(arr[i] - arr[i-1] == mini){
                vector<int>v;
                v.push_back(arr[i-1]);
                v.push_back(arr[i]);
                res.push_back(v);
            }
        
        
        return res;
        
    }
};
