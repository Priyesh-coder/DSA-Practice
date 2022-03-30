class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>::iterator it;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<int>s;
        for(auto it : nums)
            s.insert(it);
        int count = 0;
        if(s.size() >= 3){
            for(it=s.begin(); it!=s.end();it++){
            if(count == s.size()-3)
                return *it;
            else
                count++;
        }
        }
        else return nums[nums.size()-1];
        return 0;
    }
};
