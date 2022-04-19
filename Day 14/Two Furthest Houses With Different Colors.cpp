class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = INT_MIN;
        int n = colors.size();
        
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                if(colors[i] != colors[j]){
                    int x = abs(i-j);
                    maxi = max(x,maxi);
                }
            }
        }
        return maxi;
    }
};