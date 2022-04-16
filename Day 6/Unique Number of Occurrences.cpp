class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>ans;
        for(auto it : arr)
            mp[it]++;
        for(auto x : mp){
            if(ans.count(x.second) == 1)
                return false;
            ans.insert(x.second);
                
        }
        return true;
    }
};
