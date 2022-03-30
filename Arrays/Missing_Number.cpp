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
