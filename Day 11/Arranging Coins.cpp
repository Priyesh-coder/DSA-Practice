class Solution {
public:
    int arrangeCoins(int n) {
       int i=1,count=0;
       while(n){
           n -= i++;
           if(n>=0)
               count++;
           else break;
       }
        return count;
    }
};

// Alternate Solution....
class Solution {
public:
    int arrangeCoins(int n) {
        long long k = sqrt(2* (long long)n);
        long long sum = k*(k+1)/2;
        if(sum > n) return k-1;
        else return k;
        
    }
};
