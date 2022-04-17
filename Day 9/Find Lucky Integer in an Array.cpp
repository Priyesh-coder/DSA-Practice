class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(auto it:arr)
            mp[it]++;
        int largest = -1;
        for(auto it:mp)
            if(it.first == it.second)
                largest = max(largest,it.first);
        return largest;
    }
};