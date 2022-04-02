class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>leaders;
        int maxi = a[n-1];
        leaders.push_back(maxi);
        for(int i=n-2; i>=0; i--){
            if(a[i] >= maxi){
                leaders.push_back(a[i]);
                maxi = a[i];
            }
        }
        reverse(leaders.begin(),leaders.end());
        return leaders;
    }
};
