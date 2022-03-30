class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto it : mp){
            if(it.second > 1){
                v.push_back(it.first);
            }
        }
        if(v.empty()) v.push_back(-1);
        sort(v.begin(),v.end());
        return v;
    }
};
