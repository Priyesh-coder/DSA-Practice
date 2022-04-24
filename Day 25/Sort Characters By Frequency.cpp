class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto c:s) mp[c]++;
        
        priority_queue<pair<int,char>>pq;
        
        for(auto x:mp)
            pq.push({x.second,x.first});
        
        string str = "";
        while(!pq.empty()){
            char c = pq.top().second;
            for(int i=0; i<pq.top().first; i++)
                str += c;
            pq.pop();
        }
        return str;
    }
};
