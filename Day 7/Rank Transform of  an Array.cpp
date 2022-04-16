class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        set<int>s;
        for(auto &it: arr)
            s.insert(it);
        int rank = 1;
        for(auto &it:s)
            mp[it] = rank, ++rank;
        
        for(int i=0; i<arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};
