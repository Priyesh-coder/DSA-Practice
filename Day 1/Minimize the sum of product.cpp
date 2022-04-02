class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        long long int sum = 0;
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int j=0; j<n; j++){
            sum += a[j] * b[j];
        }
        return sum;
    }
};
