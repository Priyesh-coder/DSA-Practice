class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp;
        for(auto it:heights)
            temp.push_back(it);
        int n = heights.size();
        sort(heights.begin(),heights.end());
        int count = 0;
        for(int i=0; i<n; i++)
            if(heights[i] != temp[i])
                count++;
        return count;
    }
};
