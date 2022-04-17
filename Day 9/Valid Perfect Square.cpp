class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low=0,high=num,mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(mid*mid < num)
                low = mid+1;
            else if(mid*mid > num)
                high = mid-1;
            else
                return true;
        }
        return false;
    }
};
