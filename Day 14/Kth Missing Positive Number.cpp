class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=1; i<=2000; i++)
            mp[i] = 1;
        for(int i=0; i<arr.size(); i++)
            mp[arr[i]]++;
        vector<int>v;
        for(auto it = mp.begin(); it != mp.end(); it++)
            if(it->second==1)
                v.push_back(it->first);
        
        sort(v.begin(),v.end());
        
        return v[k-1];
        
    }
};
