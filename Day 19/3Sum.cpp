class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        
        for(int i=0;i<n-2;i++){
            if(i==0||(i>0&&nums[i]!=nums[i-1])){// fixed a on one place
                int low=i+1; // then do binary search for  finding b+c
                int high = n-1;
                int sum = 0-nums[i]; //sum=0-a
                while(low<high){
                    if(nums[low]+nums[high]==sum){ //b+c=-a
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        while(low<high&&nums[low]==nums[low+1]){ // for duplicacy in left side
                            low++;
                        }  
                         while(low<high&&nums[high]==nums[high-1]){ // for duplicacy in right side
                            high--;
                        }  
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        return res;
    }
};