class Solution {
public:
    int divide(int dividend, int divisor) {
        int ans = 0;
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        else{
            ans = dividend/divisor;
        }
        if(ans > INT_MAX-1) return INT_MAX;
        if(ans < INT_MIN) return INT_MIN;
        
        return ans;
    }
};
