class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>left,right;
        stack<pair<int,int>>s1,s2;
        int pseudoLIndex = -1;
        int pseudoRIndex = n;
        
        for(int i=0; i<n; i++){
            while(!s1.empty() && s1.top().first >= heights[i]) s1.pop();
            if(s1.size()==0) left.push_back(pseudoLIndex);
            else left.push_back(s1.top().second);
            s1.push({heights[i],i});
        }
        
        for(int i=n-1; i>=0; i--){
            while(!s2.empty() && s2.top().first >= heights[i]) s2.pop();
            if(s2.size()==0) right.push_back(pseudoRIndex);
            else right.push_back(s2.top().second);
            s2.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        int width[n], area[n];
        for(int i=0; i<n; i++)
            width[i] = right[i]-left[i]-1;
        
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            area[i] = width[i]*heights[i];
            ans = max(ans,area[i]);
        }
        return ans;
    }
};
