class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int n = letters.size(), low=0, high=n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(target >= letters[mid]){
                low = mid+1;
            }else{
                ans = letters[mid];
                high = mid-1;
            }
        }
        return ans;
    }
};