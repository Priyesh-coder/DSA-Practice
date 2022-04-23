class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       map<int,int>m;
       vector<int>v(2);
        for(int i=1; i<=nums.size(); i++)
            m[i]++;
        
        for(auto num: nums)
            m[num]++;
        
        for(auto it: m){
            if(it.second==3)
                v[0] = it.first;
            if(it.second==1)
                v[1] = it.first;
        }
        return v;
    }
};
