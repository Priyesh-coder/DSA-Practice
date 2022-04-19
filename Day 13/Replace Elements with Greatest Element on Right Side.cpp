class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        ans.push_back(-1);
        int i = arr.size()-1;
        int rge = arr[i];
        while(i--){
            ans.push_back(rge);
            rge = max(rge,arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Alternate Solution...
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans{};
        for(int i{1}; i<arr.size(); i++){
            int maxi = *max_element(arr.begin()+i, arr.end());
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
    }
};
