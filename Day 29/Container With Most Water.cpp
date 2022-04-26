class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n-1;
        int water = 0;
        
        while(l<r){
            int w = r-l;
            int h = min(arr[l], arr[r]);
            water = max(water, h*w);
            if(arr[l]<arr[r])
                l++;
            else
                r--;
        }
        return water;
    }
};