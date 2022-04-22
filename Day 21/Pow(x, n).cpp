class Solution {
public:
    double helper(double x, int p){
        if(p==0) return 1;
        if(p%2==0) return helper(x*x, p/2);
        else return x*helper(x*x,p/2);
    }
    double myPow(double x, int n) {
        double ans = helper(x,n);
        return (n<0) ? (1/ans) : ans;
    }
};
