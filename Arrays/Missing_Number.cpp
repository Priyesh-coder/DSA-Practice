class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = 0;
        for(int i=0; i<n-1; i++){
            sum += array[i];
        }
        int s = (n*(n+1))/2;
        return (s-sum);
    }
};

// Alternate Solution
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int a=0,b=0;
        for(int i=0; i<n-1; i++){
            a ^= array[i];
        }
        for(int i=1; i<=n; i++){
            b ^= i;
        }
        return a^b;
    }
};
