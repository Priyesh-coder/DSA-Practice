class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int>s;
        for(int i=0; i<n; i++)
            s.insert(candyType[i]);
        if(s.size() > n/2)
            return n/2;
        else
            return s.size();
        
    }
};
