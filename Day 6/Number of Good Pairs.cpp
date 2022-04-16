class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>map;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(map.find(nums[i]) != map.end()){
                ans += map[nums[i]];
                map[nums[i]] += 1;
            } else{
                map[nums[i]] = 1;
            }    
        }
        return ans;
    }
};
