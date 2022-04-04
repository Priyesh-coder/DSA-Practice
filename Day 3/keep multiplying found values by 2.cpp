class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>sett;
        for(auto num : nums)
            sett.insert(num);
        for(auto num : nums){
            if(sett.find(original) != sett.end()){
                original = original * 2;
            }
        }
        return original;
    }
};
