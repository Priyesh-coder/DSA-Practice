class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=0, j=1;
        while(i<target.size()){
            ans.push_back("Push");
            if(j != target[i]) ans.push_back("Pop");
            else i++;
            j++;
        }
        return ans;
    }
};
