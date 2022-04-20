class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=0; i<=1000; i++){
            int count = 0;
            for(auto num: nums){
                if(num >= i)
                    count++;
            }
            if(count == i) return i;
        }
        return -1;
    }
};